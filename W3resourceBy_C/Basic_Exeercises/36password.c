#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int pass;
    int validPass = 1234;
    scanf("%d", &pass);
    if (pass == validPass)
    {
        printf("Correct Password");
    }
    else
    {
        printf("Incorrect Password");
    }
    return 0;
}