#include <stdio.h>
#include <opencv2/opencv.hpp>



int main()
{
    VideoCapture capture(0);  // Open the default camera
    if (!capture.isOpened()) {
        printf("Failed to open the camera!\n");
        return -1;
    }

    Mat frame;
    namedWindow("Hand Detection", WINDOW_NORMAL);

    while (true) {
        capture >> frame;  // Capture frame from camera

        if (frame.empty()) {
            printf("Failed to capture frame!\n");
            break;
        }

        // Apply hand detection algorithm to the frame

        // Convert frame to grayscale
        Mat gray;
        cvtColor(frame, gray, COLOR_BGR2GRAY);

        // Apply Gaussian blur
        GaussianBlur(gray, gray, Size(7, 7), 3.0);

        // Apply thresholding to obtain binary image
        Mat binary;
        threshold(gray, binary, 100, 255, THRESH_BINARY_INV);

        // Find contours in the binary image
        std::vector<std::vector<Point>> contours;
        findContours(binary, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

        // Find the largest contour
        int maxContourIndex = -1;
        double maxContourArea = 0.0;
        for (size_t i = 0; i < contours.size(); i++) {
            double area = contourArea(contours[i]);
            if (area > maxContourArea) {
                maxContourArea = area;
                maxContourIndex = i;
            }
        }

        // If a contour is found, draw a bounding rectangle around it
        if (maxContourIndex != -1) {
            Rect boundingRect = boundingRect(contours[maxContourIndex]);
            rectangle(frame, boundingRect, Scalar(0, 255, 0), 2);
        }

        // Display the resulting frame
        imshow("Hand Detection", frame);

        // Check for user exit
        if (waitKey(1) == 27) {
            break;
        }
    }

    capture.release();
    destroyAllWindows();
    return 0;
}
