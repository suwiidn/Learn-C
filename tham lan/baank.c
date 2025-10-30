
#include <stdio.h>

int main() {

   int t1000 , t500 ,t100  ,num , num500 , num100;

   printf("plase enter your money :");
   scanf("%d",&num);


   if (num % 100 != 0) {
       printf("plase try again ");
       return 0;
   }


   t1000 = num/1000 ;
   num500 = num - (t1000*1000) ;
   t500 = num500 / 500 ;
   num100 = num500 - (t500 * 500) ;
   t100 = num100/100;

   printf("#1000-bath notes : %d\n",t1000);
   printf("#500-bath notes : %d\n",t500);
   printf("#100-bath notes : %d\n",t100);





   return 0;
}
