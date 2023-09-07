#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int x, y;
    printf("Input the Coordinate(x,y):\n");
    scanf("%d%d", &x, &y);
    if (x > 0.0 && y > 0.0)
    {
        printf("Quandrant-I(+,+)");
    }
    else if (x < 0.0 && y > 0.0)
    {
        printf("Quandrant-II(-,+)");
    }
    else if (x > 0.0 && y < 0.0)
    {
        printf("Quandrant-III(+,-)");
    }
    else
    {
        printf("Quandrant-IV(-,-)");
    }
    return 0;
}