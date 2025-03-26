#include <stdio.h>
int main (){

char grade ;

printf("Enter your grade : ");
scanf("%s",&grade);
grade = toupper(grade);
switch (grade)
{
    case 'S':
printf("Throughout Heaven and Earth you alone are the Honored One.\n");
     break;
    case 'A':
printf("Stand proud you are strong.\n");
     break;
    case 'B':
printf("100 push up, 100 situps, 100 squats and a 10km run everyday.\n");
     break;
    case 'C':
printf("Atleast you passed.\n");
     break;
    case 'D':
printf("Are you even trying?\n");
     break;
    case 'F':
printf("Guess who's not graduating?.\n");
     break;
default :    
  printf("Pls enter a valid grade");
}

    return 0;
}