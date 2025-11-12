#include <stdio.h>

int main() {

    int num[6] ,totle,i,nu;

    scanf("%d",&nu);

    while (nu > 0) {

        for(i=5 ; i>=0 ; i--) {

            num[i]= nu%10 ;

            nu = nu / 10;

        }
    }

    totle = 0;
    for (i = 0 ; i<= 5 ; i++) {

        totle += num[i] ;
    }

    int t1, t2 , t;
    if (totle / 10 != 0 ) {

        t1 = totle % 10 ;
        t2 = totle /10;
        t = t1 + t2 ;
        if (t / 10 !=0){
           t1 = t % 10 ;
           t2 = t /10;
           t = t1 + t2 ;
            printf("%d",t);
        }else {

            printf("%d",t);

        }

    }else {

        printf("%d",totle);
    }



    return 0;

}
