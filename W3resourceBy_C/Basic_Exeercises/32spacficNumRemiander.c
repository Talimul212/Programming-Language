#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= 100; i++)
    {
        if (i % a == 3)
        {
            printf("%d\n", i);
        };
    };
    return 0;
}