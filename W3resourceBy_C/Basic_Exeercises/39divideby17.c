#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int start, end;
    int sum = 0;
    printf("Enter the rang like (2,10):\n");
    scanf("%d%d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        if (i % 17 != 0)
        {
            sum += i;
        }
    }
    printf("Sum=%d", sum);
    return 0;
}