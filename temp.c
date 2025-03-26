#include <stdio.h>
#include <ctype.h>

int main (){
 
char unit;
float temp;

printf("Is the temperature in (F) or (C) or (K) : ");
scanf("\n%c",&unit);

unit = toupper(unit);

if (unit == 'C')
{
    printf("\nEnter the temperature in Celsius :");
    scanf("%f",&temp);
    temp = temp + 372 ;
    printf("\nThe temperature in Kelvin : %.1f ",temp);
    temp = ((temp - 372 ) * 9/5) + 32 ;
    printf("\nThe temperature in Farenheit : %.1f ",temp);
}
else if (unit == 'F')
{
    printf("\nEnter the temperature in Farenheit :");
    scanf("%f",&temp);
    temp = (temp - 32) *5/9 ;
    printf("\nThe temperature in Celsius : %.1f ",temp);
    temp = temp + 372;
    printf("\nThe temperature in Kelvin : %.1f ",temp);
}
else if (unit == 'K')
{
    printf("\nEnter the temperature in Kelvin :");
    scanf("%f",&temp);
    temp = temp - 372 ;
    printf("\nThe temperature in Celsius : %.1f ",temp);
    temp = (temp  * 9/5) + 32 ;
    printf("\nThe temperature in Farenheit : %.1f ",temp);
}
else {
    printf("\nInvalid unit detected");
}
    return 0 ;
}