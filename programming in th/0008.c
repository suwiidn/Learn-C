#include <stdio.h>

int main() {

  int x1,x2,s;
  scanf("%d %d",&x1,&s);

  if ((x1 <= -1000 || x1 >=1000) || (s <= -1000 || s >=1000) ) {
    printf("!!!!!!(-1000 to 1000)!!!!!!!\n");
    printf("plss try agian!!!!");
    return 0;

  }

  x2 = 2*s - x1;

  printf("%d",x2);
  return 0;
}
