#include <stdio.h>

int main() {

    int num_n , t_ld , num_p ;

    scanf("%d %d %d",&num_n ,&num_p,&t_ld);

    int num[num_n] , i ;

    for(i=0 ; i < num_n ; i++) {

        scanf("%d",&num[i]);
    }

    int f_num_p ,totle = 0,totle_l =0 ;

    f_num_p = (num_p*num_n)/100 ;

    for(i=0 ;i < num_n ;i++ ) {

        if(num[i] <= t_ld) {

            totle ++ ;

        }
    }
    totle_l = num_n - totle;



    if(totle < f_num_p) {

        printf("0\n");
        printf("%d",totle_l);

    } else {

        printf("1\n");
        printf("%d",totle_l);

    }



    return 0;

}
