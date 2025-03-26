#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

long long recursion(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * recursion(n - 1);
    }
}

int main() {
    int n,c;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of negative number is not possible\n");
    }
    else {
        printf("Do you want recursion or not (Y/N): ");
        scanf(" %c", &c); 
        c = toupper(c); 
        if (c == 'Y') {
            printf("The factorial of %d using recursion is %lld\n", n, recursion(n));
        } 
        else if (c == 'N') {
            printf("The factorial of %d is %lld\n", n, factorial(n));
        } 
        else {
            printf("Invalid input. Please enter Y or N.\n");
        }
    }
    return 0;
}