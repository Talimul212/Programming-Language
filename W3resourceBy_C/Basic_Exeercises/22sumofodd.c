#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[50], n, sum = 0;
    ;
    printf("number of length:");
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    };
    for (int j = 0; j < n; j++)
    {
        if (num[j] % 2 != 0)
        {

            sum = sum + num[j];
        }
    }

    printf("total sum:%d", sum);
    return 0;
}