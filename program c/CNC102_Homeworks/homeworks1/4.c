#include <stdio.h>

int main () {

    int num_b , num_l , i;

    printf("Please enter the beginning integer:");

    scanf("%d",&num_b );

    printf("Please enter the last integer:");

    scanf("%d",&num_l);

    for ( i = num_b ; i <= num_l ; i++ ) {

        if (i % 17 == 0) {

         printf("%d\n" , i);

        }

    }

    printf("Bye!!");
    return 0;
}
