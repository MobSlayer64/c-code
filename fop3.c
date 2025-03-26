#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year : ");
    scanf("%d",&a);
    
   if((a%4) == 0)
      {
        printf("%d is a leap year",a);
      }
    else
      {
       printf("%d is a not leap year",a);
      }
}
