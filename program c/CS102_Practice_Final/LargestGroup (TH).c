#include <stdio.h>

int main() {
    int nu ;
    scanf("%d",&nu);
    int num ,i ;
    int totle[21]={0} , j ;

    for (i=0 ; i < nu ; i++) {
        scanf("%d",&num);

        totle[num]++;
    }



    int max_num , max_manynum=0;

    for(i=0 ; i<=20 ; i++ ) {

        if(totle[i]>=max_manynum) {

            max_manynum = totle[i] ;
            max_num = i ;
        }
    }

    printf("%d %d",max_num , max_manynum);

    return 0;

}
