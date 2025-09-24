#include <stdio.h>

int main() {
    float prix = 125.00;
    int N , i ;
    float total = 0.00 ;
    printf("veuillez entrer votre nmbr produit acheter :");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    total = total + prix - prix  * 0.02 *(i-1);
    }
    printf("le Totale est : %.2f DH",total);
    return 0;
}