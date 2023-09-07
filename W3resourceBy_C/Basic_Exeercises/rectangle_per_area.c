#include<stdio.h>
perimeter(int l, int w){
int c=2*(l+w);
printf("perimeter of rectangle: %d\n",c);
}
area(int l,int w){
    int c=l*w;
   printf("area of rectangle: %d\n",c); 
}
int main()
{
    perimeter(7,5);
    area(7,5);
    return 0;
}