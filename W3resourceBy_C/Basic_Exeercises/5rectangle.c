#include <stdio.h>
#include <math.h>
#include <conio.h>
perimeter(height, width)
{
    return 2 * (height + width);
}
area(height, width)
{
    return (height * width);
}

int main()
{
    printf("Perimeter of rectangle:%d\n", perimeter(7, 5));
    printf("Area of rectangle:%d\n", area(7, 5));
    return 0;
}