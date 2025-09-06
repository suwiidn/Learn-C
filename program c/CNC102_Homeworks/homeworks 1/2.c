#include <stdio.h>

int main() {

    int time_sec , hr , min , sec , num;

    printf("Please enter the time in seconds:");
    scanf("%d", &time_sec);

    hr = time_sec / 3600 ;
    num = time_sec % 3600 ;
    min = num / 60 ;
    sec = num % 60 ;



    printf("The time is %d hour(s), %d minute(s), and %d second(s).",hr , min , sec);
    return 0;
}
