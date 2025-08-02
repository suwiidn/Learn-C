#include <stdio.h>

int main() {
  int first_number ,last_number ,multiplication_to_numbers;
  printf ("Input first_number :");
  scanf("%d" , &first_number );
  printf ("Input last_number : ");
  scanf("%d",&last_number);
  printf ("What is the multiplication table? : ");
  scanf("%d",&multiplication_to_numbers);

  for (int i = first_number ; i <= last_number ; i++ ) {
     printf("------ number %d ------\n",i);
    for (int j = 1 ; j <= multiplication_to_numbers ;j++ ) {
      printf("%d*%d = %d\n" , i , j , i*j);
    }
  }
  printf("end :) ");
  return 0;

}

