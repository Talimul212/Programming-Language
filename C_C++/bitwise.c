

int fun()
{
 
int a=1, c=15;

  printf("this fore new value= %d\n ",~(a|c));
    return 0;
}

#include <stdio.h>

int main() {
// Post-Increment Operator
    int a = 1;
   
    printf("1-Output = %d \n",a--);
    printf("2-Output = %d \n",a--);
// Pre-Increment Operator
    printf("1-Output = %d \n",a--);
    printf("2-Output = %d \n",--a);
    
    for(int i=1;i<=9;i++){
        printf("%d \n",i);
    };
    // for(int i=9;i>=0;i--){
    //     printf("%d",i);
    // };
fun();
    return 0;
}

