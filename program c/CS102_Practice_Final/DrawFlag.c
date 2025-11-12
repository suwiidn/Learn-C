#include <stdio.h>

int main() {


    int i , j , x , y;
    scanf("%d",&i);
    scanf("%d",&j);

    for (x = 1 ; x<=i; x++) {

        for(y=1 ; y<= j ; y++) {


            if(y%2 != 0) {

                printf("@");

            }else {

                printf("#");

            }

        }

        printf("\n");
    }


    return 0;
}
