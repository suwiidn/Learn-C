#include <stdio.h>

int main() {
    int i_num ;

    scanf("%d",&i_num);

    int in_num[i_num] ,i ;

    for(i =0 ; i< i_num ; i++) {

        scanf("%d",&in_num[i]);
    }

    int totle[100] = {0} ;



    for(i=0 ; i< 5 ; i++) {

        totle[0] += in_num[i] ;
    }

    int totlelast;

    totlelast = totle[0] ;


    for(i=0 ; i <= i_num-5 ; i++) {



        totle[i+1] = totlelast + in_num[i+5]- in_num[i] ;

        totlelast = totle[i+1] ;



    }

    totlelast =totle[0] ;

    for (i = 0 ; i<=i_num-5 ; i++) {

        if (totle[i]>=totlelast){

            totlelast = totle[i];
        }
    }

    printf("%d",totlelast);

    return 0;

}
