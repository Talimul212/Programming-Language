#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[50], n, temp;
    printf("Enter number rang:");
    scanf("%d", &n);
    printf("Input %d Integers\n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = num[1];

    for (int i = 1; i <= n; i++)
    {

        if (num[i] >= max)
        {
            max = num[i];
        }
    }
    printf("Final The largest number is :%d ", max);
    return 0;
}
