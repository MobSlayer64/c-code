#include <stdio.h>

#define MAX 50

void readMatrix(int mat[MAX][MAX], int *rows, int *cols) {
    printf("Enter number of rows and columns: ");
    scanf("%d %d", rows, cols);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        printf("| ");
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("|\n");
    }
}

int toCompact(int mat[MAX][MAX], int rows, int cols, int compact[MAX*MAX][3]) {
    int k = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != 0) {
                compact[k][0] = i;
                compact[k][1] = j;
                compact[k][2] = mat[i][j];
                k++;
            }
        }
    }
    compact[0][0] = rows;
    compact[0][1] = cols;
    compact[0][2] = k - 1;
    return k;
}

void displayCompact(int compact[MAX*MAX][3], int k) {
    printf("Compact form:\n");
    printf("| row | col | value |\n");
    printf("---------------------\n");
    for (int i = 0; i < k; i++) {
        printf("|  %d  |  %d  |   %d   |\n", compact[i][0], compact[i][1], compact[i][2]);
    }
}

void simplecompacttranspose(int k, int compact[MAX*MAX][3], int transposed[MAX*MAX][3]) {
    int l = 0, p = 1;
    while (l < compact[0][1]) {
        for (int i = 1; i <= compact[0][2]; i++) {
            if (compact[i][1] == l) {
                transposed[p][0] = compact[i][1];
                transposed[p][1] = compact[i][0];
                transposed[p][2] = compact[i][2];
                p++;
            }
        }
        l++;
    }
    transposed[0][0] = compact[0][1];
    transposed[0][1] = compact[0][0];
    transposed[0][2] = compact[0][2];
}

void displaysimpleTransposed(int transposed[MAX*MAX][3], int k) {
    printf("Transposed matrix (compact form):\n");
    printf("| row | col | value |\n");
    printf("---------------------\n");
    for (int i = 0; i < k; i++) {
        printf("|  %d  |  %d  |   %d   |\n", transposed[i][0], transposed[i][1], transposed[i][2]);
    }
}

void fastTranspose(int k, int compact[MAX*MAX][3], int transposed[MAX*MAX][3]) {
    int row_terms[MAX] = {0}, starting_pos[MAX] = {0};
    int i, j, num_cols = compact[0][1], num_terms = compact[0][2];

    transposed[0][0] = num_cols;
    transposed[0][1] = compact[0][0];
    transposed[0][2] = num_terms;

    if (num_terms > 0) {
        for (i = 0; i < num_cols; i++)
            row_terms[i] = 0;
        for (i = 1; i <= num_terms; i++)
            row_terms[compact[i][1]]++;
        starting_pos[0] = 1;
        for (i = 1; i < num_cols; i++)
            starting_pos[i] = starting_pos[i-1] + row_terms[i-1];
        for (i = 1; i <= num_terms; i++) {
            j = starting_pos[compact[i][1]]++;
            transposed[j][0] = compact[i][1];
            transposed[j][1] = compact[i][0];
            transposed[j][2] = compact[i][2];
        }
    }
}

void displayfastTransposed(int transposed[MAX*MAX][3], int k) {
    printf("Fast Transposed matrix (compact form):\n");
    printf("| row | col | value |\n");
    printf("---------------------\n");
    for (int i = 0; i < k; i++) {
        printf("|  %d  |  %d  |   %d   |\n", transposed[i][0], transposed[i][1], transposed[i][2]);
    }
}

int main() {
    int mat[MAX][MAX], rows = 0, cols = 0, k = 0, c1;
    int compact[MAX*MAX][3];
    int transposed[MAX*MAX][3];
    char c2;

    do {
        readMatrix(mat, &rows, &cols);
        displayMatrix(mat, rows, cols);
        k = toCompact(mat, rows, cols, compact);
        displayCompact(compact, k);
        printf("Choose Transpose Method:\n1. Simple Compact Transpose\n2. Fast Transpose\n");
        scanf("%d", &c1);

        if (c1 == 1) {
            simplecompacttranspose(k, compact, transposed);
            displaysimpleTransposed(transposed, k);
        } else if (c1 == 2) {
            fastTranspose(k, compact, transposed);
            displayfastTransposed(transposed, k);
        } else {
            printf("Invalid choice.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &c2); 
    } while (c2 == 'y' || c2 == 'Y');

    return 0;
}