#include <stdio.h>
int main(){
/*
additon +
subtraction -
multiplicaTION *
divition /
modulus %
increment ++(increases a number by 1)
decrement --(decreases a number by 1)
*/


int x = 12;
int y = 5 ;
x++;
y--;
int add = x + y ;
int sub = x - y ;
int mul = x * y ;
float div = x /(float)  y;
int mod = x % y ;


printf("%d\n",add);
printf("%d\n",sub);
printf("%d\n",mul);
printf("%.2f\n",div);
printf("%d\n",mod);


return 3 ;
}

