#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define false 0
#define true !false
bool max(int a,int b);
bool res=true;
int main(){

     int a,b;
     printf("entre a:");
     scanf("%d",&a);
     printf("entre b:");
     scanf("%d",&b);
     if(max(a,b))  printf("%d > %d", a, b);
     else
        printf("%d > %d", b, a);

    return 0;
}
bool max(int x,int y){

     if(x<y)     res = false;
     return res;

   }


