#include <stdio.h>
int main (){
  
const double PI = 3.14;
double radius ;
double circumference ;
double area ;

printf("\nWhat's the radius of the circle ?\n");
scanf("%lf", &radius);

circumference = PI * radius * 2 ;
area = PI * radius * radius ;

printf("\nThe circumference of the circle is %lf units",circumference);
printf("\nThe area of the circle is %lf sq units",area);

  return 0;   
}