#include <stdio.h>
#include <math.h>
int main (){

double A;
double B;
double C;
double area;

printf("\nEnter Lenght of perpendicular :");
scanf(" %lf",&A);

printf("\nEnter Lenght of base :");
scanf(" %lf",&B);

C = sqrt(A*A+B*B);

printf ("\nThe lenght of hypothenus : %lf",C);

area = 0.5*A*B ;
printf ("\n\nArea of the triangle : %lf",area);

    return 0 ;
}