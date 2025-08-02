#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846


int main (){
  double real,real_taxi,R;
  scanf("%lf",&R);
  // PI * R^2
  real = M_PI * pow(R,2);
  // 2* PI^2
  real_taxi = 2 * pow(R,2);



  printf("%lf\n",real );
  printf("%lf\n",real_taxi);
  return 0;
}