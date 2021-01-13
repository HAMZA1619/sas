#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char nom[20], prenom[20], sex[1], GSM[20];
    int Age;

    printf("saisir votre nom: ");
    scanf("%s",nom);
    printf("saisir votre prenom: ");
    scanf("%s",prenom);
    printf("saisir votre sex: ");
    scanf("%s",sex);
    printf("saisir votre GSM: ");
    scanf("%s",GSM);
    printf("saisir votre Age: ");
    scanf("%s",&Age);
    printf("bonjour: %s ,%s\n %s\n %s\n %s",nom , prenom ,sex ,GSM ,&Age);
    return 0;
}
