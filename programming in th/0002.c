#include <stdio.h>

int main() {
  int min ,max ,n, num;
  min =  2000000000;
  max = -2000000000;

  scanf("%d", &n);

  for (int i = 1 ;i <= n ; i++ ) {

    scanf("%d",&num);

    if (num > max) {
      max = num ;
    }
    if (num < min ) {
      min = num ;
    }
  }
  printf("%d\n%d",min , max);

  return 0;
}
