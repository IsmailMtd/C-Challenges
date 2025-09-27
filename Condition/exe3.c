#include <stdio.h>
int main(){
int N ;
printf("Veuiler entre annee :");
scanf("%d",&N);
if((N%4==0 && N%100!=0) || N%400==0)
    printf("Cette annee %d est bissextile",N);
else 
    printf("Cette annee %d n\'est pas bissextile ",N);
return 0;
}