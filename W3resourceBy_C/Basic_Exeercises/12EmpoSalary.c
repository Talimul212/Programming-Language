#include <stdio.h>
#include <math.h>
#include <conio.h>
salary(int i, int j)
{
    float us = i * j;
    printf("Salary=U$ %0.2f\n", us);
};

int main()
{
    int id, hours, salaryPerHrs;
    scanf("%d%d%d", &id, &hours, &salaryPerHrs);
    printf("Employees ID:%d\n", id);
    printf("working Hours:%d\n", hours);
    printf("Salary amount/hr: %d\n", salaryPerHrs);
    switch (id)
    {
    case 321:
        printf("Employees ID:%d\n", id);
        salary(hours, salaryPerHrs);
        break;
    case 322:
        printf("Employees ID:%d\n", id);
        salary(hours, salaryPerHrs);
        break;

    default:
        printf("Employees ID not found");

        break;
    };
    return 0;
}