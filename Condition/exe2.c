#include <stdio.h>
int main(){
int N ;
printf("Veuillez entrer un nombre :");
scanf("%d",&N);

switch(N){
    case 6 : 
        printf("le personnage va a droite");
break ;
    case 4 : 
        printf("le personnage va a gauche");
break ;
    case 8 : 
        printf("le personnage va en haut");
break ;
    case 2 : 
        printf("le personnage va en bas");
break ;
    default :printf("erreur de saisi,le personne ne bouges pas");
break ;    
}

    return 0;
}