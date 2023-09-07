#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int base = (b * b) - 4 * a * c;
    float postive = (-b + sqrt(base)) / (2 * a);
    float negative = (-b - sqrt(base)) / (2 * a);
    printf("Root1 = %0.2f\n", postive);
    printf("Root2 = %0.2f", negative);
    return 0;
}