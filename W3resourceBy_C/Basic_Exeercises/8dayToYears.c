#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int i;
    scanf("%d", &i);
    int year = i / 365;
    int weeks = i % 365;
    int week = weeks / 4;
    int days = weeks % 4;
    int day = days;
    printf("Year:%d\n", year);
    printf("week:%d\n", week);
    printf("day:%d", day);

    return 0;
}