#include <stdio.h>
#include <stdlib.h>

int main()
{   int b=0;
    float a,c=0,d;
    do{
        printf("entre nombre: ");
        scanf("%f",&a);
        if(a>-1){
            b++;
            c+=a;
        }
        else d=c/b;
    }while(a>-1);

    printf("la moyenne de %d entie est %.2f",b, d);
    return 0;
}
