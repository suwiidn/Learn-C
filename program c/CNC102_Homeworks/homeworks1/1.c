#include <stdio.h>

int main() {
  double height_mother ,height_father ,mew ;
  double p , q ;
  printf("Enter the height of the mother (cenrineters) : ");
  scanf("%lf",&height_mother);
  printf("Enter the height of the father (cenrineters) : ");
  scanf("%lf",&height_father);

  mew = (height_mother + height_father)/2 ;

  p = mew + 13.5 ;
  q = mew -13.5 ;

  printf("The possible height of the child is between %.2f to %.2f centimeters.",q ,p);
  return 0;
}
