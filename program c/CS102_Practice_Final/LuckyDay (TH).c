#include <stdio.h>

int main() {

    int num , nu=0, nu1 =0 , totle[20]={0} , i , numb ,day , to,totlenum=0,totle_d[20],kkkk[20];

    scanf("%d",&numb);

    for(i=0 ; i<numb ; i++) {

        scanf("%d %d",&day ,&num );
        kkkk[i] = num ;
        nu = num %10 ;
        num= num/10 ;
        nu1 = num%10 ;

        if(nu1 == 0) {

                to = (nu*nu*nu*nu)*day ;
                if(to%10 == 4) {

                    totle[i] = kkkk[i] ;
                    totle_d[i] = day ;

                    totlenum ++ ;
                }



        }else {

            to = ((nu*nu*nu*nu)+nu1)*day ;
                if(to%10 == 4) {

                    totle[i] = kkkk[i] ;
                    totle_d[i] = day ;

                    totlenum ++ ;
                }


        }


    }
    printf("%d\n",totlenum);

    for (i=0 ; i<20 ; i++) {

        if(totle[i] != 0) {

            printf("%d %d\n",totle_d[i],totle[i]);
        }
    }





    return 0 ;

}
