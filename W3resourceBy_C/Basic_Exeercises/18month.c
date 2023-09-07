#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int days;
    scanf("%d", &days);
    int year = days / 365;
    int years = days % 365;
    int month = (years / 30);
    int day = days % 30;
    printf("%d Year(s)\n", year);
    printf("%d Month(s)\n", month);
    printf("%d Day(s)", day);

    return 0;
}