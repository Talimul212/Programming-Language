#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int i;
    scanf("%d", &i);

    if (i == 0 || i <= 20)
    {
        printf("[0,20]");
    }
    else if (i == 21 || i <= 40)
    {
        printf("[21,40]");
    }
    else if (i == 41 || i <= 60)
    {
        printf("[41,60]");
    }
    else if (i == 61 || i <= 80)
    {
        printf("[61,80]");
    }
    else
    {
        printf("eeror message");
    }

    return 0;
}