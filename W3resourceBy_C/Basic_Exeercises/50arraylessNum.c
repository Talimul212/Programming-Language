#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[50], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] <= 5)
            printf("A[%d]=%d\n", i, num[i]);
    }

    return 0;
}