#include <stdio.h>

void value(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }
int a ;
    int big = arr[0], small = a;

    for (int i = 1; i < size; i++) {
        if (arr[i] > big) {
            small = big;
            big = arr[i];
        } else if (arr[i] > small && arr[i] != big) {
            small = arr[i];
        }
    }

   
        printf("The second-highest value is: %d\n", small);
    
}

int main() {
    
    int arr[] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    value(arr, size);

    return 0;
}