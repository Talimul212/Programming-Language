#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int amount, note100, note50, note20, note10, note5, note2, note1;
    scanf("%d", &amount);
    printf("Input the amount:\n", amount);
    note100 = amount / 100;
    int note100s = amount % 100;
    note50 = note100s / 50;
    int note50s = note100s % 50;
    note20 = note50s / 20;
    int note20s = note50s % 20;
    note10 = note20s / 10;
    int note10s = note20s % 10;
    note5 = note10s / 5;
    int note5s = note10s % 5;
    note2 = note5s / 2;
    int note2s = note5s % 2;
    note1 = note2s / 1;

    printf("%d Note of 100.00\n", note100);
    printf("%d Note of 50.00\n", note50);
    printf("%d Note of 20.00\n", note20);
    printf("%d Note of 10.00\n", note10);
    printf("%d Note of 5.00\n", note5);
    printf("%d Note of 2.00\n", note2);
    printf("%d Note of 1.00\n", note1);

    return 0;
}