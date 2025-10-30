#include <stdio.h>

int main () {


     int num , totle = 1 ;

     printf ("input your factory number :");

     scanf("%d",&num);

     for (int i = num ; i>=1 ; i-- ) {

        totle  *= i;    
    
     }

     printf("factory : %d",totle);

    return 0;
}
