#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int sec, h, m, s;
    scanf("%d", &sec);
    s = sec % 60;
    m = (sec / 60) % 60;
    h = (sec / 60) / 60;
    printf("H:M:S - %d", h);
    printf(":%d", m);
    printf(":%d", s);

    return 0;
}