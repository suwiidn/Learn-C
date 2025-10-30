#include <stdio.h>

int main() {
int i,a,b,totle;

printf("Enter size of your square:");
scanf("%d",&i);

while(i<3 || i >20){

printf("Enter size of your square:");
scanf("%d",&i);

}

int num[i][i];
printf("Enter your square: \n");

for (a=0 ; a < i ; a++) {

    for (b=0 ; b<i ; b++){
        scanf("%d",&num[b][a]);
    }
}
//---------------------------------------------------------------------------------------//
int mew=0,x,y,tt,tm;

for (x=0 ;x<i ;x++ ){

    mew +=num[x][x] ;
}
tt = mew ;
tm = tt;
mew =0 ;
for (x=i-1 ;x>=0 ;x-- ){

    mew +=num[x][x] ;
}
if (tm < mew){

    tm = mew;
}
if (mew != tt) {
        tt = 0;
}

mew = 0 ;

for (y=0 ; y < i;y++){

    for(x=0 ; x<i ;x++){
    mew += num[y][x];
    }

if (tm < mew){

    tm = mew;
}

if (mew != tt) {
        tt = 0;
}
mew = 0;

}

for (y=0 ; y < i;y++){

    for(x=0 ; x<i ;x++){
    mew += num[x][y];
    }
if (tm < mew){

    tm = mew;
}
if (mew != tt) {
    tt = 0;
}
mew = 0;

}
if (tt !=0){
    printf("Your square is a magic square!! \n");
    printf("The magic constant is %d.",tt);

}else {
    printf("Your square is NOT a magic square.\n");
    printf("The maximum sum is %d.",tm);

}


return 0;
}




