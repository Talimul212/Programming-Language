#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            printf("^%d", i);
            printf("=%d\n", i * i);
        }
    };
    return 0;
}