#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = "W";
    unsigned long ux = 2541567890;
    printf("1 %d\n", a + b);
    printf("2 %d\n", x + c);
    printf("3 %d\n", dx + x);
    printf("4 %d\n", ((int)dx) + ax);
    printf("5 %d\n", a + x);
    printf("6 %d\n", s + b);
    printf("7 %d\n", ax + b);
    printf("8 %d\n", s + c);
    printf("9 %d\n", ax + c);
    printf("10 %d", ax + ux);

    return 0;
}