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


int main (){
float a;
float b;
float c;
float d;
float e;
printf("input numbers\n");
scanf("\n%f\n%f\n%f\n%f\n%f",&a ,&b,&c,&d,&e);

float array[] = {a, b , c, d, e };
int size = sizeof(array)/sizeof(array[0]);

sort  (array,size);
print  (array,size);

return 0 ;
}