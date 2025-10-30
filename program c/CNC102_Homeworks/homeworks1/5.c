#include <stdio.h>

int main() {

   int num , totle = 0;

   printf("Please enter an integer <between 2 to 9999999> :");
   scanf("%d",&num);

   while (num <= 0 || num>= 9999999) {

      printf("%d is not between 2 to 999999999, please re-enter.\n",num);

      printf("Please enter an integer <between 2 to 9999999> :");
      scanf("%d",&num);

   }

   for (int i = 2 ; i <= (num/2) ; i++){

      if (num % i == 0) {
         totle = 1 ;
      }

   }

   if (totle == 0) {
      printf("%d is a prime number.",num);
   } else {

      printf("%d is a not prime number.",num);
   }
   return 0;
}
