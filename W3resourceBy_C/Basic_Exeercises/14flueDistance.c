#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int fuel, distance;
    scanf("%d%d", &distance, &fuel);
    float avg = distance / fuel;
    printf("Averege consumption (km/lt) %0.2f", avg);
    return 0;
}