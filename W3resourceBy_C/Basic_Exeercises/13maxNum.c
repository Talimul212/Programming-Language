#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        printf("Maximum value of three integers: %d", a);
    }
    else if (a > c)
    {
        printf("Maximum value of three integers: %d", a);
    }
    else if (b > c)
    {
        printf("Maximum value of three integers: %d", b);
    }
    else
    {
        printf("Maximum value of three integers: %d", c);
    }
    return 0;
}