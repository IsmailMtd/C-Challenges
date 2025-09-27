#include <stdio.h>

int main() {
    int T,i; 
    int s =0;
    printf("donner le nombre delement du tableau : ");
    scanf("%d",&T);

    int tab[T];
  
        for ( i = 0; i <T; i++)
        {
         printf("give a number tab[%d] ",i);
          scanf("%d",&tab[i]);
        }
         printf("1er version du tableau :");
       for ( i = 0; i < T; i++)
      
       {
        
        printf("|%d|",tab[i]);
       }
       int nbr;
        do
        {
            nbr = 0;
            for ( i = 0; i <T - 1; i++)
            {
                if (tab[i]> tab[i+1])
                {
                   int temp = tab[i];
                   tab[i] = tab[i+1];
                   tab[i + 1] = temp ;
                   nbr++;
                }
                
            }
            
          
            
        } while ( nbr != 0);
        printf("\n2eme version du tableau :");
        for ( i = 0; i < T; i++)
      
       {
        
        printf("|%d|",tab[i]);
       }

    return 0;
}