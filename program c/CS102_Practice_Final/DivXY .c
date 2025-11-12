#include <stdio.h>

int main() {

    int x,y,i,totle,totle_last = 0 ;

    scanf("%d %d",&x ,&y) ;

    for (i=x ; i<= y ; i++) {

        totle = y % i ;
        if (totle == 0) {

            totle_last ++ ;
        }
    }

    printf("%d",totle_last);


    return 0;

}
