#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int p, q, r, s;
    scanf("%d%d%d%d", &p, &q, &r, &s);
    if ((q > r) && (s > p) && ((r + s) > (p + q)) & (r > 0) & (s > 0) & (p % 2 == 0))
    {
        printf("Correct values");
    }
    else
    {
        printf("Wrong values");
    }
    return 0;
}
