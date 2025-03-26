#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
   
    char pick;
  
    char string1[100];
    printf("Enter the first string: ");
    gets(string1);
   

    char string2[100];
    printf("Enter the second string: ");
    gets(string2);
   
    do{
        
        int c;
        char string3[100];
        strcpy(string3, string1);
        char string4[100];
        strcpy(string4, string2);
        printf("\nto get the string length = 1 \n to copy string1 in string2 = 2 \n to concatenate the strings = 3 \n to compare string = 4 \n enter the category code: ");
        scanf("%d", &c);

        if (c == 1)
        {
            printf("The length of the first string is %d\n", strlen(string3));
            printf("The length of the second string is %d\n", strlen(string4));
        } 
          else if (c == 2) 
        {
            
            printf("The string copied is %s\n", strcpy(string4, string3));
        } 
          else if (c == 3) 
        {
            printf("The string concatenated is %s\n", strcat(string1, string2));
        } 
         else if (c == 4) 
        {
            int result = strcmp(string1, string2);
            if (result == 0) 
            {
                printf("First string is equal to second string\n");
            } 
             else 
            {
                printf("First string is not equal to second string\n");
            } 
        }
         else 
        {
            printf("Please enter a valid category code\n");
        }

        printf("\nDo you want to continue (Y/N): ");
        scanf(" %c", &pick);
        pick = toupper(pick);
    } while (pick == 'Y');

    return 0;
}