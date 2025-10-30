#include <stdio.h>

int main () {
    int num_first , num_last , totle_num , num;

    printf ("p enter your number first :");
    scanf("%d",&num_first);

    printf("p enter your number last :");
    scanf("%d",&num_last);

    for (int i = num_first ; i <= num_last ;i++ ) {


        printf ("*************number %d ****************** \n",i);



        for (int j = 1 ; j <= 12; j++ ) {

            num = j*i ;
            printf("%d * %d = %d \n",i ,j ,num);

        }

    }
 



    return 0;   
      
}   