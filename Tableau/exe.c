#include <stdio.h>
int main(){
 int i ;
  float T[5];
  float S , M ;
  S = 0 ;
  for(i=0;i<5;i++){
    printf("Ecrire la note de etudiant num %d :",i+1);
    scanf("%f",&T[i]);
    S=S+T[i];
  }M= S / 5;
  printf("la moyenne de notes est :%.2f",M);
    return 0;
}
