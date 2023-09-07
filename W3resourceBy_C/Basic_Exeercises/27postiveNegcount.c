#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[50], n;
    printf("Enter the Rang of Number:");
    scanf("%d", &n);
    printf("Enter the %d Number:\n", n);

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (num[j] > 0.0)
        {
            count1++;
        }
    }
    printf("Posative number:%d\n", count1);
    for (int j = 0; j < n; j++)
    {
        if (num[j] < 0.0)
        {
            count2++;
        }
    }
    printf("negative number:%d\n", count2);

    return 0;
}
