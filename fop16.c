#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    int c;
    char filename[100];
    printf("Enter the name of the file to copy: ");
    scanf("%s", filename);
    fptr1 = fopen(filename, "r"); 
    if (fptr1 == NULL)
     {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
     }
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
     {
        printf("Could not open file for reading.\n");
        return 1;
     }

    printf("File opened successfully for reading.\n");

    fptr2 = fopen("copy.txt", "a");
    if (fptr2 == NULL)
     {
        printf("Could not open file copy.txt for writing.\n");
        fclose(fptr1); 
        return 1;
     }
    else
     {
        printf("File opened successfully for writing.\n");
     }

    while ((c = fgetc(fptr1)) != EOF)
     {
        fputc(c, fptr2);
     } 

    printf("File copied successfully to copy.txt.\n");

    fclose(fptr1);
    fclose(fptr2);
}