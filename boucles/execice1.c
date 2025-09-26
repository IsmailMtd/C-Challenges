#include <stdio.h>

int main(){
int N ;
int i ;
printf("veuillez entre votre nombre :");
scanf("%d",&N);
int resultat = 0 ;
for(i=1;i<=N;i++)
resultat = resultat + i;
printf("la somme de 1 a %d :%d",N,resultat);

    return 0 ;
}