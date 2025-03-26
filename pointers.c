#include <stdio.h>

int main(){

int i = 3;//local variable declaration

int *j; //pointer variable declaration

j = &i; //initialization of pointer variable

printf ("\n 1.Address of i = %d", &i);

printf ("\n 2.Address of i = %d",j);

printf ("\n 3.Address of j = %d", &j);

printf ("\n 4.Value of j= %d", j);

printf ("\n 5.Value of i = %d", i);

printf ("\n 6.Value of i = %d", *(&i));

printf ("\n 7.Value of i = %d", *j);

return 0; }

