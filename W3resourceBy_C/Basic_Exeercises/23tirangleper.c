#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (((a + b) > c) && ((b + c) > a) & ((a + c) > b))
    {
        int sum = a + b + c;
        printf("perimeter of tirangle: %0.2f", sum);
    }
    else
    {
        printf("your input value not follow this contion:\n1.a+b>c\n2.b+c>a\n3.a+c>b");
    }
    return 0;
}