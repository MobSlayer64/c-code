#include <stdio.h>

int main(){

double i , a;

printf("Enter the number : ");
scanf("%lf" ,&a);

for (i = 1; i <=10; i++)
  {
    printf("\n%.2lf * %.2lf = %.2lf ",a , i , (i*a));
  }
}