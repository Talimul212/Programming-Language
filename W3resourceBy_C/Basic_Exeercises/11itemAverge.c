#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int item1W, item2W, item1No, item2No;
    scanf("%d%d%d%d\n", &item1W, &item1No, &item2W, &item2No);
    printf("Weight-item-1:%d\n", item1W);
    printf("No. of item-1:%d\n", item1No);
    printf("Weight-item-2:%d\n", item2W);
    printf("No. of item-2:%d\n", item2No);
    int totalValueofItem1 = item1W * item1No;
    int totalValueofItem2 = item2W * item2No;
    float averge = (totalValueofItem1 + totalValueofItem2) / (item1No + item2No);
    printf("Averge value:%0.2f\n", averge);
    return 0;
}