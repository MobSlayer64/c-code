#include <stdio.h>

//void birthday(char name[] , int age)
void birthday(char x[] , int y)  
{
   printf("happy birthday %s" ,x);
   printf("\nyou are %d years old" ,y);
}


double square(double x)
{
   return x*x+x ;
}


int main ()
{
char name[] = "Adi";
int age = 17;
double x = square(4);

birthday(name , age);
printf("\n%.2lf",x);

    return 0;
}