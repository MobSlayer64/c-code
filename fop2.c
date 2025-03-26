#include <stdio.h>

int main (){

float a;
printf("ENTER YOUR PAY : ");
scanf("%f" ,&a);
float b = a/10 ;
float c = a/20 ;
float d = a/50 ;
float e = (a + b + c);
float f = (a + b + c - d);

printf("\nHSA : %.2f",b);
printf("\nTA : %.2f",c);
printf("\nTAX : %.2f",d);
printf("\nGROSS SALARY : %.2f",e);
printf("\nNET SALARY : %.2f",f);


}