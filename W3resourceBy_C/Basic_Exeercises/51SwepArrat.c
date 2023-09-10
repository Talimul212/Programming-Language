#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int num[20], n;
    scanf("%d", &n);
    printf("%d\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("[%d]=%d \n", n - i, num[i]);
    }

    return 0;
}

// int main()
// {
//     int AL = 5;
//     int array_n[AL], i, temp;

//     printf("Input the 5 members of the array:\n");
//     for (i = 0; i < AL; i++)
//     {
//         scanf("%d", &array_n[i]);
//     }

//     for (i = 0; i < AL; i++)
//     {
//         if (i < (AL / 2))
//         {
//             temp = array_n[i];
//             array_n[i] = array_n[AL - (i + 1)];
//             array_n[AL - (i + 1)] = temp;
//         }
//     }

//     for (i = 0; i < AL; i++)
//     {
//         printf("array_n[%d] = %d\n", i, array_n[i]);
//     }
//     return 0;
// }