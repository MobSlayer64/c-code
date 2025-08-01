#include <stdio.h>
#include <math.h>

void sort (float array[] , int size){
for(int i = 0 ; i < size - 1 ; i++ )
 {
   for(int j = 0 ; j < size - 1 ; j++ )
  {
    if (array[j] < array[j+1])
    {
      int temp = array[j];
      array[j] = array[j+1];
      array[j+1] = temp ;
    }
  }
 }
}



void print (float array[] , int size)
{
 for(int i = 0 ; i < size  ; i++ )
 {
    printf("\n%.2f\n" ,   array[i]);
 }
}

void select (float array[] , int size)
{
    printf("\nThe number have been arranged in descending order");
    printf("\nwhich poistion would you like to select ?\n");
    int position; 
    scanf("%d", &position);
    if (position < 1 || position > size) {
        printf("Invalid position. Please enter a number between 1 and %d.\n", size);
    } else {
        printf("The number at position %d is: %.2f\n", position, array[position - 1]);
    }
}


int main (){

printf("how many the numbers are there?\n");
int n;
scanf("%d", &n);
float array[n];
printf("input numbers\n");
for (int i = 0; i < n; i++) {
    scanf("%f", &array[i]);
}

/*float a;
float b;
float c;
float d;
float e;
printf("input numbers\n");
scanf("\n%f\n%f\n%f\n%f\n%f",&a ,&b,&c,&d,&e);

float array[] = {a, b , c, d, e };*/
int size = sizeof(array)/sizeof(array[0]);

sort   (array, size);
print  (array, size);
select (array, size);

return 0 ;
}