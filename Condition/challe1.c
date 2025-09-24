#include <stdio.h>

int main()
{
    int A ;
    printf("veuillez ecriver votre nombre :");
    scanf("%d",&A);
    if(A%2==0)
    printf("votre nombre est pair :%d",A);
    else {
    printf("votre nombre est impair :%d",A);
    }
    return 0;
}
