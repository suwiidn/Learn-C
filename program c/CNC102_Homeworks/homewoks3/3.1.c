#include <stdio.h>

int main() {

int i , j , a ,s=1,b;
printf("Enter size of your rectangle:");
scanf("%d %d",&j , &i);

for (b=1 ; b<=j  ;b++) {

    if (s%2 !=0){
    for(a=1 ; a<=i ;a++){
        if (a%2 != 0){
            printf("O");
        }else if (a%2 == 0){
            printf("X");
        }
    }
  }else if (s%2 == 0){

  for(a=1 ; a<=i ;a++){
        if (a%2 != 0){
            printf("X");
        }else if (a%2 == 0){

            printf("O");

        }
  }
  }
  printf("\n");
  s++ ;
}
return 0 ;
}

