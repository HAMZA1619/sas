#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, plus, moin, multi, devi, porso;
    printf("entre la valeur de a: ");
    scanf("%d",&a);
    printf("entre la valeur de b: ");
    scanf("%d",&b);
    plus = a+b,
    moin = a-b;
    multi = a*b;
    devi = a/b;
    porso = a%b;
    printf("%d + %d = %d\n", a, b, plus );
    printf("%d - %d = %d\n", a, b, moin );
    printf("%d * %d = %d\n", a, b, multi );
    printf("%d / %d = %d\n", a, b, devi );
    printf("%d _ %d = %d\n", a, b, porso );
    return 0;
}
