#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swab(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
printf("Enter the first number: ");
scanf("%d", &a);
printf("Enter the second number: ");
scanf("%d", &b);
swap(&a, &b); 
printf("Swaping with pointer\n");
printf("The first number is %d and the second number is %d\n", a, b);
swab(a, b);
printf("Swaping without pointer\n");
printf("The first number is %d and the second number is %d\n", a, b);
}