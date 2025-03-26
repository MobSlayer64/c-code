#include <stdio.h>
#include<string.h>
int main (){
 
char name[25] ;// make sure to add a character limit for array
int age ;

 printf("\nWhat your name?\n");
 fgets(name, 25, stdin);

 name[strlen(name)-1] = '\0';

 printf("How old are you?\n");
 scanf("%d",&age);

 printf("\nHello %s", name); 
 printf("\nYour age is %d",age);

    return 0;
 }