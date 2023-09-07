#include <stdio.h>
int main()
{
    char name[100];
    int data_Of_Birth [30];
    int number [30];

    gets(name);
    gets(data_Of_Birth);
    gets(number);

    printf("Your name: %s \n", name);

    printf("Data of Birth: %s  \n", data_Of_Birth);
    printf("Phone number: %s", number);

    return 0;
}