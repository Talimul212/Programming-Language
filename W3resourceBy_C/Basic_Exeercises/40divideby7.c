#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int start, end;
    int sum = 0;
    printf("Enter the rang like (2,10):\n");
    scanf("%d%d", &start, &end);
    for (int i = start; i < end; i++)
    {
        if (i % 7 == 2 || i % 7 == 3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}