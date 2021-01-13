#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi=3.14 ;
    float r, D, P, S;
    printf("entre le ryon: ");
    scanf("%f",&r);
    if(r!=0){
    D = r*r;
    P = 2*pi*r ;
    S = r*r*pi;
    printf("un cercle de ryon %.2f\n",r);
    printf("a le diametre de %.2f\n", D);
    printf(" le perimetre : %.2f\n", P);
    printf("la surface: %.2f\n", S);}
    return 0;
}
