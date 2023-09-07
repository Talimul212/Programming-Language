#include <stdio.h>
#include <math.h>
#include <conio.h>
ismultiple(int a, int b)
{
    if (a / b == 0)
    {
        printf("Multiple");
    }
    else
    {
        printf("Not Multiple\n");
    }
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    ismultiple(a, b);
    return 0;
}