#include <stdio.h>
#include <math.h>
int main (){

double A = sqrt(25);
double B = pow(2, 5);
int C = round(9.50) ;
int D = ceil(9.34) ;// ceil always rounds the number up
int E = floor(9.67) ;// floor always rounds down
double F = fabs(-52); // finds the distance from zero(always positive)
double G = log (3);
double H = sin(90);
double I = cos(0);
double J = tan(45);

printf("\n%.2lf",A);
printf("\n%.2lf",B);
printf("\n%d",C);
printf("\n%d",D);
printf("\n%d",E);
printf("\n%.2lf",F);
printf("\n%lf",G);
printf("\n%lf",H);
printf("\n%lf",I);
printf("\n%lf",J);

    return 0;
}