#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[40], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] == 0.0 || num[i] <= 0.0 || num[i] == 100)
        {
        }
        else
        {
            printf("n[%d] = %d\n", i, num[i]);
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n[5], i, x;
    printf("Input the 5 members of the array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            n[i] = x;
        }
        else
        {
            n[i] = 100;
        }
    }
    printf("Array values are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("n[%d] = %d\n", i, n[i]);
    }
    return 0;
}
