#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
    return 0;
}