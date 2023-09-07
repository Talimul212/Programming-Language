#include<stdio.h>
int main()
{
   int i, j,n,m;
   scanf("%d number of rows:",&n);
   scanf("%d number of colum:",&m);
   for(i=1;i<=n;i++) {
    for(j=1;j<=m;j++){
        if(i==1||j==1||i==n||j==m){
            printf("*");
        }
        else{
            printf(" ");
        };
    };
     printf("\n");
   };
    return 0;
}

// *****
// *   *
// *   *
// *   *
// *****