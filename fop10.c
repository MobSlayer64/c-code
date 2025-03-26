#include <stdio.h>

int main (){

    printf("what is the order of the matrix: ") ;
    int n;
    scanf("%d", &n);
    int arr[n][n];      
    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int arr2[n][n];
    printf("Enter the elements of the second matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The first matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
printf("The second matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the two matrices is: \n");
    int sum[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the first matrix is: \n");
     int trans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = arr[i][j];
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the second matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = arr2[i][j];
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    printf("The product of the two matrices is: \n");
    int product[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            product[i][j] = 0; 
            for (int k = 0; k < n; k++) {
                product[i][j] += arr[i][k] * arr2[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    printf("the saddle points are : \n");
    int min, max, row, col, flag = 0;
    for (int i = 0; i < n; i++)
    {
        min = arr[i][0];
        col = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                col = j;
            }
        }
        max = arr[0][col];
        row = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][col] > max)
            {
                max = arr[j][col];
                row = j;
            }
        }
        if (max == min)
        {
            printf("For first matrix : %d at (%d, %d)\n", max, (row+1), (col+1));
            flag = 1;
        }
    }
  if (flag == 0)
    {
        printf("No saddle points found in the first matrix\n");
    }

    flag = 0;
    for (int i = 0; i < n; i++)
    {
        min = arr2[i][0];
        col = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr2[i][j] < min)
            {
                min = arr2[i][j];
                col = j;
            }
        }
        max = arr2[0][col];
        row = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr2[j][col] > max)
            {
                max = arr2[j][col];
                row = j;
            }
        }
        if (max == min)
        {
            printf("For second matrix : %d at (%d, %d)\n", max, (row+1), (col+1));
            flag = 1;
        }
    }
if(flag==0)
   {
    printf("No saddle points found in the second matrix\n");
   }
    
    
}