#include <stdio.h>
#include <stdbool.h>

// AND --- &&
/*int main () {

float temp = 1000 ;
bool sunny = false ;

if ( temp >= 0 && temp <= 30 && sunny == true )
{
    printf("\nthe weather is good"); 
}
else
{
    printf("\nthe weatheer is bad");
}


    return 0;
}*/


// OR --- ||
/*int main () {

float temp = 23 ;

if ( temp <= 0 || temp >= 30  )
{
    printf("\nthe weather is bad"); 
}
else
{
    printf("\nthe weather is good");
}


    return 0;
}*/

// NOT --- !

int main () {

bool sunny = 1;

if (!sunny)
{
   printf("its cloudy outside");
}
else
{
   printf("its sunny outside");  
}

    return 0;
} 