#include <stdio.h>

void Ascii_Allz() {
int A ;
printf("------------------------------------------ \n");
printf("Ascii Table for A-Z \n");
printf("------------------------------------------ \n");
for (A = 65 ; A <= 90 ; A++) {

    printf("%c - %d \n",A,A);

}
}
void Ascii_allz() {
int B;
printf("------------------------------------------ \n");
printf("Ascii Table for a-z \n");
printf("------------------------------------------ \n");
for (B = 97 ; B <= 122 ; B++) {

    printf("%c - %d \n",B,B);

}
}
void Ascii_numz() {
int C;
printf("------------------------------------------ \n");
printf("Ascii table of code 65-90 \n");
printf("------------------------------------------ \n");
for (C = 65 ; C <= 90 ; C++) {

    printf("%d - %c \n",C,C);

}
}
int main() {
  int num;
  printf("############ MENU ############ \n");
  printf("1. Ascii table of characters A-Z \n");
  printf("2. Ascii table of characters a-z \n");
  printf("3. Ascii table of code 65-90 \n");
  printf("0. Quit Program \n");
  printf("Enter your choice <1, 2, 3 or 0> :");

  scanf("%d",&num);

  while(num < 0 || num > 3 ) {
    printf("Invalid Choice!!! \n");
    printf("Enter your choice <1, 2, 3 or 0> : ");

    scanf("%d",&num);
  }

  if (num == 0 ) {

    printf("Bye!!");
    return 0;

  }else if (num == 1) {

      Ascii_Allz();

  }else if (num == 2) {

      Ascii_allz();
  }else if (num == 3) {

      Ascii_numz();
  }


return 0;
}
