#include <stdio.h>

int main(){
    int C ;
    printf("veuilez entre la taille de tableau : ");
    scanf("%d",&C);
    int T[C], A[C];
    for(int i = 0; i < C ; i++){
        printf("entrer le nombre : ");
        scanf("%d",&T[i]);
    
    A[C-1-i]=T[i];
    }
    for(int i=0 ;i<C ; i++){
        printf("%d  ",A[i]);
    }
    return 0;
}