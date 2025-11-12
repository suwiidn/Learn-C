#include <stdio.h>


int main() {

    int num_t ,i,j,r;

    scanf("%d",&num_t);

    int num[num_t] , totle[100]={0} ,tt[100]={0} ;

    for (i=0 ; i<num_t ; i++) {

        scanf ("%d",&num[i]);
    }

    j= 1;
    for(i=5 ; i<=96 ; i++){

        tt[i] = j ;
        j++ ;
    }

     r = 4;
    for(i=0 ; i<tt[num_t] ; i++) {

        for(j=0 ; j <= r ; j++) {


            totle[i] += num[j] ;

        }
        r++ ;
    }
    int yww ;
    yww = totle[0];

    for(i =0 ; i<tt[num_t] ; i++) {

        if (yww<totle[i]) {

            yww = totle[i];
        }
    }

    printf("%d",yww);

    return 0;

}
