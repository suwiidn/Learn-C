#include <stdio.h>

int main () {

    int num1 , num2, num3 ;

    printf("Please enter length of each side of your triangle:");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);

    if ((num1 <= 0 || num2 <= 0 || num3 <= 0) || ((num1 + num2) <= num3) || ((num1 + num3) <= num2) || ((num2 + num3) <= num1)) {

        printf("This is NOT a possible triangle.\n");

    } else if (num1 == num2 && num1 == num3 && num2 == num3 ) {

        printf("This is an equilateral triangle.\n");

    } else if (num1 != num2 && num1 != num3 && num2 != num3) {

        printf("This is a scalene triangle.\n");

    } else if (num1 == num2 || num1 == num3 || num2 == num3) {

        printf("This is an isosceles triangle. \n");

    }


    return 0;
}
