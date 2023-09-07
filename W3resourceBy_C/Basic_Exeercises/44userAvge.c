#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[50], n;
    printf("Enter the number rang");
    scanf("%d", &n);
    printf("Enter the %d numbers\n", n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        sum += num[i];
    }
    int avg = sum / n;
    printf("Average marks in Mathematics: %d", avg);
    return 0;
}