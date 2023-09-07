#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[50], n;
    printf("Enter the Rang of Number:");
    scanf("%d", &n);
    printf("Enter the %d Number:\n", n);
    int sum = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    };

    for (int j = 0; j < n; j++)
    {
        if (num[j] % 2 != 0)
        {
            sum += num[j];
            count2++;
        }
    }
    printf(" Odd Number:%d\n", count2);
    printf(" Sum of Odd Number:%d\n", sum);

    return 0;
};