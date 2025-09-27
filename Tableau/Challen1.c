#include <stdio.h>

int main(){
    int T[5];
    for(int i = 0; i < 5 ; i++){
        printf("entrer le nombre");
        scanf("%d",&T[i]);
    }for(int i=0 ;i<5 ; i++){
        printf("%d\n",T[i]);
    }
    return 0;
}