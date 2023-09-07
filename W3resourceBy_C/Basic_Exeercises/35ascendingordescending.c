#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int firstNum, secondNum;
    printf("Input the number of pair:\n");
    scanf("%d%d", &firstNum, &secondNum);
    if (firstNum > secondNum)
    {
        printf("The pair in a descending!");
    }
    else
    {
        printf("The pair in a ascending!");
    }
    return 0;
}