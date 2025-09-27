#include <stdio.h>
int main()
{
    int i, num1,num2,num3;
    printf("donner la taille de tableau 1 : ");
    scanf("%d",&num1);
    int tab1[num1];
    for (int i = 0; i < num1; i++)
    {
        printf("donner un valeur pour tab[%d] :",i);
        scanf("%d",&tab1[i]);
    }
    printf("donner la taille de tableau 2 :");
    scanf("%d",&num2);
    int tab2[num2];
    for (int i = 0; i < num2; i++)
    {
        
        printf("donner un valeur pour tab[%d] :",i);
        scanf("%d",&tab2[i]);
    }
    num3= num1 + num2;
    int tab3[num3];
    for (int i = 0; i <num1; i++)
    {
       tab3[i]= tab1[i];
    }
    for ( int i = 0; i <num2; i++)
    {
       tab3[num1+i]= tab2[i];
    }
    printf("\nle premier tableaux est\n");
    for ( int i = 0; i < num1; i++)
    {
         printf("|%d|",tab1[i]);
    }
    printf("\nle deuxeme tableaux est\n");
    for (int  i = 0; i < num2; i++)
    {
    printf("|%d|",tab2[i]);
    }
    printf("\nle troisieme tableaux est\n");
    for ( int i = 0; i < num3; i++)
    {
         printf("|%d|",tab3[i]);
    }

    return 0;

}