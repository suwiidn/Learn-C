#include <stdio.h>

int main() {

    int num_first,num_last;

    printf("Please enter the beginning integer:");
    scanf("%d",&num_first);

    printf("Please enter the beginning integer:");
    scanf("%d",&num_last);

    printf("All the numbers that can be divivded by 13 are:\n");

    for (int i = num_first ; i <= num_last ; i++) {
        if ((i % 13) ==0) {
            printf("%d\n",i);
        }

    }

    printf("Bye!!");
    return 0;
}
