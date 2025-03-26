#include <stdio.h>

int main () {

int age = 17 ; // %d is used to insert it . %u for unsigned int
// short int makes its limit shorted from 2,147,483,648 to 32,768 (short can be used without int)
// long long int makes the limit -9quintallion to 9quintallion (normal int is already considered long) . %lld
double score = 97.3 ;// %f is used to insert this us %.xf where x is the demical place
char grade = 'A' ;  // %c is used to insert this
char name[] = "Adi" ;//%s is used to insert this
//bool x = true or false;  %d is used to insert this
char aaise = 100  ; // contains value from -128 to 128 converts numbers to letters if %c is used but prints number if %d is used
//unsigned char  same as normal just contains 0 to 255 . unsigned takes only positive value and doubles the limits
printf("I am %d years old\n",age);
printf("%s is %d years old\n",name ,age );
printf("%s got an %c\n",name,grade);
printf("%s has %.1f percentge and an %7c\n",name ,score,grade);
printf("%7d\n", aaise); 
printf("%3c\n", aaise); 

//const 
int gg = 787;
//gg = 58;
printf("%d", gg);

return 0;
}