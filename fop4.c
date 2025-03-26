#include <stdio.h>

int main ( ){

int a,b,c,d,e ;

printf("Enter your english marks :");
scanf("%d",&a);
printf("Enter your maths marks :");
scanf("%d",&b);
printf("Enter your phycics marks :");
scanf("%d",&c);
printf("Enter your chemistry marks :");
scanf("%d",&d);
printf("Enter your PE marks :");
scanf("%d",&e);

if (a<40 || b<40 || c<40 || d<40 || e<40 )
{
   printf("Failure");
}
else
{ 
  float f = (((a+b+c+d+e)*100)/(500)) ;

  if(f >= 75)
    {
      printf("Disinguished");
    }
  else if(f >= 60)
    {
     printf("division one");
    }
  else if(f >= 50)
    {
      printf("division two");
    }
    else
    {
     printf("division three");
    }
  }
}
  
  
  
  
 /*
  sorter(a ,b ,c ,d ,e);
   return 0;
  /*int f = (((a+b+c+d+e)*100)/(500)) ;

  int catogory = (f >= 75)?3:(f >= 60)?2:(f >= 50)?1:0;


switch (catogory)
{
  case 3 :
            printf("Disinguished");
     break;
  case 2 :
            printf("division one");
     break;
  case 1 :
            printf("division two");
     break;
  case 0 :
            printf("division three");
     break;                              
  default :    
             printf("Error");
}
}
}

void sorter (int a ,int b ,int c ,int d ,int e)
{
float f = (((a+b+c+d+e)*100)/(500)) ;

if(f >= 75)
  {
    printf("Disinguished");
  }
else if(f >= 60)
  {
   printf("division one");
  }
else if(f >= 50)
  {
    printf("division two");
  }
  else
  {
   printf("division three");
  }
  
return;
}*/