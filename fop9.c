#include <stdio.h>

int main() {
    
    int n;
    printf("How many numbers are there: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int e = 0;
    int o = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            e++;
        }
         else 
        {
            o++;
        }
    }

    int even[e];
    int odd[o];
    int ei = 0, oi = 0;

    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            even[ei++] = arr[i];
        }
         else 
        {
            odd[oi++] = arr[i];
        }
    }

    if(e>0)
    {
    printf("Even numbers are:\n");
    for (int i = 0; i < e; i++)
      {
        printf("%d\n", even[i]);
      }
    }
    else
    {
        printf("No even numbers\n");
    }
    
    if(o>0)
    {
    printf("Odd numbers are:\n");
    for (int i = 0; i < o; i++) 
      {
        printf("%d\n", odd[i]);
      }
    }
    else
    {
        printf("No odd numbers\n");
    }
    return 0;
}