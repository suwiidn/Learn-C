#include <stdio.h>

int main() {
  int number ,last_number;
  printf ("Input number :");
  scanf("%d" , &number );
  printf ("What is the multiplication table? : ");
  scanf("%d",&last_number);
  printf("-----table number %d -----\n",number);

   for (int i = 1 ; i<=last_number ; i++) {
    printf("%d * %d = %d\n",number , i ,number*last_number );
   }
   printf("end :) ");

  return 0;

}

