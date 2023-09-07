#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n * 3; i++)
    {

        printf(" %d", i);
        if (i % 3 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}