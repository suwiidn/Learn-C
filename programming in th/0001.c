#include <stdio.h>

int main () {

    int a, b, c;
    
    scanf("%d\n %d\n %d\n", &a, &b, &c);
    
    int all = a + b + c;
    
    if (all >= 80 && all <= 100){
        printf("A");
    } else if (all >= 75 && all <= 79) {
        printf("B+");
    } else if (all >= 70 && all <= 74) {
        printf("B");
    } else if (all >= 65 && all <= 69) {
        printf("C+");
    } else if (all >= 60 && all <= 64) {
        printf("C");
    } else if (all >= 55 && all <= 59) {
        printf("D+");
    } else if (all >= 50 && all <= 54) {
        printf("D");
    } else if (all >= 0 && all <= 49) {
        printf("F");
    } 
    
    return 0;
}