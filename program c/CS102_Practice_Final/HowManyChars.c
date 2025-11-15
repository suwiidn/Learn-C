#include <stdio.h>

int main() {

    int num;
    char first_c ;

    scanf("%c",&first_c);

    scanf("%d",&num);

    int i , j ;

    char whatachar[100] ;
    int keepmanychar[100]={0};
    for(i = 1 ; i<=num ; i++) {

        scanf("%s",whatachar);

        for(j=0 ; j<=100 ; j++ ) {

            if (whatachar[j] == first_c) {

                keepmanychar[i]++ ;
            }
        }


    }
    for (i=1 ; i<=num ; i++) {

        printf("%d\n",keepmanychar[i]);
    }


    return 0;

}
