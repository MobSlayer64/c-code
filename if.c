#include <stdio.h>
int main (){

double a;
char name[30];

printf("Welcome to the Jurassic Park. \nWhat's you name?\n");
fgets( name , 30 ,stdin );

printf("Hello %s Enter your age :",name);
scanf("%lf",&a);

if (a>150){ 
    printf("Ghosts are not allowed");
}
 else if (a>60){
    printf("Senior citizens, This way pls --->.");
 }
  else if (a==0){
    printf("you aren't born yet");
 }
 else if (a<0){
    printf("Zombie breach! requesting back up code 864");
 }
 else if(a>= 18){
    printf("You are eligible to proceed");
}
 else   {
    printf("YOU SHALL NOT PASS");
 }
    
    return 0;
}