#include <stdio.h>
perimeter(int i)
{
    int pic = 3.1416;
    float preimeter = 2 * pic * i;
    printf("Perimeter of Circle: %0.2f\n", preimeter);
}
area(int i)
{
    int pic = 3.1416;
    float area = pic * (i * i);
    printf("Area of Cricle: %0.2f", area);
}
int main()
{
    perimeter(3);
    area(3);

    return 0;
}