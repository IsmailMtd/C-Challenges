#include<stdio.h>
#include<string.h>
int main (){
     int A[100] , T[100],t[100];
     int nbr ,B=0,C=0;
      int k=0;
      int j=0;
     printf("enter nmbr elemen :");
     scanf("%d" , &nbr);

     for(int i=0;i<nbr;i++){
     printf("entre le nombre dun tableau ");
     scanf("%d",&A[i]);

     if(A[i]>B){
        B=A[i];
     }

     if(A[i]<=A[0]){
        C=A[i];}
     if(A[i]%2==0&&A[i]!=0){
       T[j]=A[i];
        j++;
        }else if(A[i]!=0){

        t[k]=A[i];
        k++;
        }

        }  printf("le nombre pair est\n");
         for(int i=0 ;i<j;i++){
            printf("%d\n",T[i]);}
            printf("le nombre impair est\n");
         for(int i=0 ;i<k;i++){
            printf("%d\n",t[i]);}
         printf("le max et :%d\n",B );
          printf("le min et :%d\n",C);
        }
