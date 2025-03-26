#include<stdio.h>
#include<ctype.h>

int main (){
float a,b ;
char op ;
 char pick ;

do
 {
    printf("\nEnter the first number : ");
    scanf("%f",&a);
    printf("\nEnter the second number : ");
    scanf("%f",&b);

    printf("\nEnter an operator (+, -, *, /): ");
    scanf(" %c", &op);

switch (op)
  {
    case '+' :
        printf("\n %.2f + %.2f  = %.2f" ,a ,b ,(a+b));
     break;
    case '-':
        printf("\n %.2f - %.2f  = %.2f" ,a ,b ,(a-b));
     break;
    case '*':
        printf("\n %.2f * %.2f  = %.2f" ,a ,b ,(a*b));
     break;
    case '/':
        printf("\n %.2f / %.2f  = %.2f" ,a ,b ,(a/b));
     break;
     default :    
        printf("\nEnter a valid operator");
  }
        printf("\ndo you wanna continue (Y/N) : ");
        scanf(" %c",&pick);
           pick = toupper(pick);
 }
while (pick == 'Y');
 {
    printf("\nprocedure complete");
 }

}