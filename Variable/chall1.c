#include <stdio.h>

int main()
{
char nom[30] , prenom[30] , sex[20] , email[30] ;
int age ;
    printf("votre nom :");
    scanf("%s",nom);
    printf("votre prenom :");
    scanf("%s",prenom);
    printf("votre age :");
    scanf("%d",&age);
    printf("votre sex (M/F) :");
    scanf("%s",sex);
    printf("votre adress email :");
    scanf("%s",email);

    printf("\n Bonjour %s %s ,ton age est %d Votre sex %s , votre email %s ",nom,prenom,age,sex,email);

    return 0;
}