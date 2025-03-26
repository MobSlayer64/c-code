#include <stdio.h>

int main() {
    int d;
    printf("Enter a number: ");
    scanf("%d", &d);

    int b = 0;
    printf("Reversed digits: ");
    while (d !=0 ) {
        int digit = d % 10;
        printf("%d", digit);
        b = b * 10 + digit;
         d /= 10;
    }
    return 0;
}



