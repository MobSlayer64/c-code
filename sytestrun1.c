
#include <stdio.h>
#include <ctype.h>
/*
void add(double n1, double n2, char op) {
    printf("Result: %.2lf\n", n1 + n2);
return;
}

void sub(double n1, double n2, char op) {
    printf("Result: %.2lf\n", n1 - n2);
return;
}

void mul(double n1, double n2, char op) {
    printf("Result: %.2lf\n", n1 * n2);
return;
}

void div(double n1, double n2, char op) {
   if (n2 != 0) {
                printf("Result: %.2lf\n", n1 / n2);
            } else {
                printf("Error! Division by zero.\n");
            }
return;
}


int main() {
    char op,c;
    double n1, n2;

do {
    
printf("Enter first number:");
scanf("%lf", &n1);
printf("Enter second number:");
scanf("%lf", &n2);
printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &op);
 switch (op) {
        case '+':
            add(n1 ,n2 ,op);
            break;
        case '-':
           sub(n1 ,n2 ,op);
            break;
        case '*':
             mul(n1 ,n2 ,op);
            break;
        case '/':
            div(n1 ,n2 ,op);
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }
    printf("Do you want to perform another calculation? (y/n): ");
    scanf(" %c", &c);
    c = toupper(c);

} while (c =='Y');

    return 0;

}
*/

void reader (int arr[], int n) {
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
return;
}

void display(int arr[], int n) {
    printf("Elements are:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
printf("\n");
return;
}
 void adder (int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum : %d\n", sum);
return;
 }

int main (){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];
    reader(arr, n);
    display(arr, n);
    adder(arr, n);
}