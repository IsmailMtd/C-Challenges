#include <stdio.h>
int main()
{
  int A , B , C ;
  printf("Veuillez entrer 1 entiers :");
  scanf("%d",&A);
  printf("Veuillez entrer 2 entiers :");
  scanf("%d",&B);
  printf("Veuillez entrer 3 entiers :");
  scanf("%d",&C);
  if((A+B>C)||(A+C>B) || (B+C>A)){
  printf("Oui triangle \n");
  }
  if((A==B)&&(A==C)){
  printf("Ce triangle est Equilateral");
  }
  else if((A==B)||(B==C)||(A==C)){
    printf("Ce triangle est Isocele");
  }
  else{
    printf("Ce triangle est Scalene");
  }
  return 0;
}