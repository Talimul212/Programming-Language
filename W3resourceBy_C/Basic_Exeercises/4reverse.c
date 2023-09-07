#include <stdio.h>
int main()
{
    char char1[50] = "XYZ";

    for (int i = 2; i >= 0; i--)
    {
        printf("%c", char1[i]);
    }

    return 0;
}