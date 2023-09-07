#include <stdio.h>
f_fun()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        if (i == 0)
        {
            for (j = 0; j < 7 - i; j++)
            {
                printf("#");
            }
        }
        else if (i == 1)
        {
            for (j = 0; j < 1; j++)
            {
                printf("#");
            }
        }
        else if (i == 2)
        {
            for (j = 0; j < 1; j++)
            {
                printf("#");
            }
        }
        else if (i == 3)
        {
            for (j = 0; j < 5; j++)
            {
                printf("#");
            }
        }
        else if (i == 4)
        {
            for (j = 0; j < 1; j++)
            {
                printf("#");
            }
        }
        else if (i == 5)
        {
            for (j = 0; j < 1; j++)
            {
                printf("#");
            }
        }

        printf(" \n");
    }
};

c_fun()
{
    int i, j;
    for (i = 0; i <= 8; i++)
    {
        if (i == 0 || i == 8)
        {
            for (j = 0; j < 10; j++)
            {
                if (j == 1 || j == 8)
                {
                    printf(" ");
                };
            }
            for (j = 0; j < 10; j++)
            {

                printf("#");
            }
        }
        else if (i == 1 || i == 7)
        {

            for (j = 0; j <= 1; j++)
            {

                printf("#");
            }
        }
        else if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)
        {

            for (j = 0; j < 1; j++)
            {

                printf("#");
            }
        }
        printf("\n");
    };
};

int main()
{

    f_fun();
    // for c patten
    c_fun();

    return 0;
}