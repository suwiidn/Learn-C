#include <stdio.h>
#include <math.h>

int main (){
  double a,b,c,c2;

  scanf("%lf\t%lf",&a ,&b);
  c2 = pow(a,2) + pow(b,2);
  c = sqrt(c2);


  printf ("%.6f",c);
  return 0;
}