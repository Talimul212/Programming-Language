#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int endNum, startNum;
    int sum = 0;
    printf("Input the pair of number like(10,2)\n");
    scanf("%d%d", &endNum, &startNum);
    for (int i = startNum; i <= endNum; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("Sum=%d", sum);
    return 0;
}