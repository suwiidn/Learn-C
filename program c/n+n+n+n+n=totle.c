                                                                                      #include <stdio.h>

int main() {
  int number ,totle = 0;

  while (1) {
    printf("number :");
    scanf("%d", &number);

    if (number <= 0) {
      break;
    }

    totle +=number ;

  }

  printf("totle : %d\n",totle);
  return 0;
}
