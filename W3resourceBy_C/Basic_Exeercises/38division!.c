#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int firstNum, secondNum;
    printf("Input the two number:\n");
    scanf("%d%d", &firstNum, &secondNum);
    if (firstNum % secondNum == 0)
    {
        printf("Division:%d", firstNum / secondNum);
    }
    else
    {
        printf("Division is not possible");
    }
    return 0;
}