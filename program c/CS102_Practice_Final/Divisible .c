#include <stdio.h>


int main() {

    int num_first , num_last ,i;
    int has ;

    scanf("%d %d %d",&num_first ,&num_last ,&has );
    int totle ,totle_c;
    int  totle_last = 0 ;
    for(i = num_first ; i <= num_last ; i++) {

        totle = i % has ;

        if (totle == 0) {

            totle_last ++ ;
        }


    }

    printf("%d",totle_last);
    return 0;

}
