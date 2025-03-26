#include <stdio.h>
#include <string.h>

// for loop
/*int main (){

for(int index = 1; index<=10000000; index = index*2 )
{
 
 printf("\n%d",index);
 
}
    return 0;
}*/

//while loop
/*int main(){

char name[25];

   printf("\nWhat's your name?: ");
   fgets(name, 25, stdin);
   
   name[strlen(name) - 1] = '\0';

   while(strlen(name) == 0)
   {
      printf("\nYou did not enter your name");
      printf("\nWhat's your name?: ");
      fgets(name, 25, stdin);
      name[strlen(name) - 1] = '\0';
   }

   printf("Hello %s", name);

    return 0;
}*/

// do while loop
/*int main(){

int n = 0;
int sum = 0;
 
  do{
     printf("Enter a number above zero : ");
     scanf("%d",&n);
      if (n>0)
       {
         sum = sum + n;
       }

    }
  while(n>0);

 printf("sum : %d",sum);

    return 0;
}*/

//nested loops
/**/
int main(){

 int rows;
 int columns;
 char symbol;

   printf("Enter a symbol to use: ");
   scanf("%c", &symbol);

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);

   printf("Enter # of columns: ");
   scanf("%d", &columns);
   

   for (int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= columns; j++)
      {
         printf("%c",symbol);
      }
      printf("\n");
   }
   return 0;
}
