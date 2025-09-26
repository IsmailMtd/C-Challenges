#include <stdio.h>

int main(){
int N;
const int n=42;
do{
    printf("Proposer un nombre :");
    scanf("%d",&N);
 if(n<N){
     printf("Trop grand\n");
 } else if(n>N){
     printf("Trop petit\n");
 }else {
     printf("Bravo!\n");
    }
}while(N!=n);
    return  0;
}