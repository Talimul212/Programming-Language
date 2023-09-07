#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int p, q;
    scanf("%d %d", &p, &q);
    for (int i = 1; i <= p * q; i++)
    {
        printf(" %d ", i);
        if (i % q == 0)
        {
            printf("\n");
        }
    }
    return 0;
}