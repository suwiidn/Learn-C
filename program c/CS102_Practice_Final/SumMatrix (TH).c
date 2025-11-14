#include <stdio.h>

int main() {

    int num[4][4] ,i,j;

    for (i=0 ; i<4 ; i++) {

        for (j=0 ; j<4 ;j++) {

            scanf("%d",&num[i][j]);
        }
    }

    int i_num , j_num ;

    scanf("%d %d",&i_num,&j_num);

    int i_totle=0 , j_totle=0 ;

    for(i=0 ; i<4 ; i++) {

        i_totle += num[i_num][i];
    }

    for(i=0 ; i<4 ; i++) {

        j_totle += num[i][j_num];
    }

    int totle ;

    totle = i_totle + j_totle ;

    printf("%d",totle);

    return 0;

}
