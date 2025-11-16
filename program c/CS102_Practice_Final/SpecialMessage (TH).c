#include <stdio.h>

int main() {

    char ch[100];
    int i,gu=1, sara =0 ,keepnum[100]={0};

    scanf("%s",ch);

    for(i=0 ; i<=100;i++) {

        if(ch[i]=='_') {
            gu++ ;
            keepnum[i] = 123 ;

        }
    }
    for(i=0 ; i<=100;i++) {

        if (keepnum[i]==123) {

            if(ch[i+1] == 'A' ) {
            sara ++ ;
        }
    if(ch[i+1] == 'E') {
            sara ++ ;
        }
    if(ch[i+1] == 'I') {
            sara ++ ;
        }
    if(ch[i+1] == 'O') {
            sara ++ ;
        }
    if(ch[i+1] == 'U') {
            sara ++ ;
        }
    if(ch[i+1] == 'a') {
            sara ++ ;
        }
    if(ch[i+1] == 'e') {
            sara ++ ;
        }
    if(ch[i+1] == 'i') {
            sara ++ ;
        }
    if(ch[i+1] == 'o') {
            sara ++ ;
        }
    if(ch[i+1] == 'u') {
            sara ++ ;
        }


        }
    }

    if(ch[0] == 'A' ) {
            sara ++ ;
        }
    if(ch[0] == 'E') {
            sara ++ ;
        }
    if(ch[0] == 'I') {
            sara ++ ;
        }
    if(ch[0] == 'O') {
            sara ++ ;
        }
    if(ch[0] == 'U') {
            sara ++ ;
        }
    if(ch[0] == 'a') {
            sara ++ ;
        }
    if(ch[0] == 'e') {
            sara ++ ;
        }
    if(ch[0] == 'i') {
            sara ++ ;
        }
    if(ch[0] == 'o') {
            sara ++ ;
        }
    if(ch[0] == 'u') {
            sara ++ ;
        }

    printf("%d %d",gu,sara);



    return 0;
}
