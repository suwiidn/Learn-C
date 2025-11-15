#include <stdio.h>

int main() {


    int num ,i;

    scanf("%d",&num);

    double  i_num[num],totle=0.0;

    for (i=0 ; i<num ; i++) {

        scanf("%lf",&i_num[i]);


        totle += i_num[i] ;

    }


    totle /= num ;
    int last ;

    for (i=0 ; i<num ; i++) {

        if (i_num[i] > totle) {

            last ++ ;
        }
    }

    printf("%d",last);





    return 0;

}
