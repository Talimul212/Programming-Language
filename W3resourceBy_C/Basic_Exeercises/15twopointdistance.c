#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    float calc = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    printf("Distance between the said point:%0.3f", sqrt(calc));
    return 0;
}