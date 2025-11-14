#include <stdio.h>

int main() {
    int num[4][5] ,i , j,num_1,num_2;

    for(i=0;i<4;i++) {

        for(j=0;j<5;j++) {

            scanf("%d",&num[i][j]);
        }
    }

    int posi_1[2] , posi_2[2] ;

    scanf("%d %d ",&posi_1[0],&posi_1[1]);
    scanf("%d %d",&posi_2[0],&posi_2[1]);

    num_1 =  num[posi_1[0]][posi_1[1]] ;
    num_2 =  num[posi_2[0]][posi_2[1]] ;

    num[posi_1[0]][posi_1[1]] = num_2 ;
    num[posi_2[0]][posi_2[1]] = num_1 ;

    int num_last[4]={0} ;

    for(i=0; i<4;i++) {

        for(j=0;j<5;j++) {


            if (num_last[i] < num[i][j]){

                  num_last[i] = num[i][j] ;

            }
        }
    }

        printf("%d %d %d %d",num_last[0],num_last[1],num_last[2],num_last[3]);



    return 0;

}
