#include <stdio.h>
#include <stdlib.h>

int main()
{   //declaration
   int a ,b;
   char op,o;
   printf("entre a:");
   scanf("%d",&a);
   printf("entre op:");
   scanf("%c",&op);
   getchar();
   printf("entre b:");
   scanf("%d",&b);
   //affiche la talle
   //octale
   printf("le octal de nombre %d est %o\n",a,a);
   printf("le octal de nombre %d est %o\n",b,b);
   //hexal
    printf("le hexsal de nombre %d est %x\n",a,a);
   printf("le hexsal de nombre %d est %x\n",b,b);

   //les operation
  /* if(op="+"){
    printf("la resulta est:%d\n",a+b);
   }
   else if(op='-'){
    printf("la resulta est:%d\n",a-b);
   }
   else if(op='/'&&b>0){
    printf("la resulta est:%d\n",a/b);
   }
   else if(op='*'){
    printf("la resulta est:%d\n",a*b);
   }
   else if(op='%'){
    printf("la resulta est:%d\n",a%b);
   }
   else printf("indefiend operation!!\n");*/


          //switch case
    switch(op){
    case '+':
    printf("la resulta est:%d",a+b);
    break;

    case '-':
    printf("la resulta est:%d",a-b);
    break;
    case '/': if(b>0){
    printf("la resulta est:%d",a/b);}
    else printf("indefiend operation!!");

    break;
    case '*':
    printf("la resulta est:%d",a*b);
    break;
    case '%':
    printf("la resulta est:%d",a%b);
    break;
    default:
    printf("indefiend operation!!");
    break

    }
    return 0;
}
