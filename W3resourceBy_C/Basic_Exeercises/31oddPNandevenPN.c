#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int n, num[50];
    printf("Enter the number range:");
    scanf("%d", &n);
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] > 0.0 && num[i] % 2 == 0)
        {

            sum1 += num[i];
            count1++;
        }
        else if (num[i] < 0.0 && num[i] % 2 == 0)
        {
            sum2 += num[i];
            count2++;
        }
        else if (num[i] > 0.0 && num[i] % 2 != 0)
        {
            sum3 += num[i];
            count3++;
        }
        else if (num[i] < 0.0 && num[i] % 2 != 0)
        {
            sum4 += num[i];
            count4++;
        }
        else
        {
        }
    }
    printf("The number of positive Even :%d\n", count1);
    printf("The sum of positive Even :%d\n", sum1);
    printf("The number of Negative Even :%d\n", count2);
    printf("The sum of Negative Even :%d\n", sum2);
    printf("The number of Positive Odd :%d\n", count3);
    printf("The sum of Positive Odd :%d\n", sum3);
    printf("The number of Negative Odd :%d\n", count4);
    printf("The sum of Negative Odd :%d\n", sum4);
    return 0;
}