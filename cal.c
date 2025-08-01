#include <limits.h>
#include <stdio.h>


double simpleCalc(double num1, double num2, char op) {
    double result;

    
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
      
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Error! Division by zero.\n");
            return INT_MIN; 
        }
    }
    else {
        printf("Error! Operator is not correct.\n");
        return INT_MIN; 
    }
    return result;
}

int main() {
    char op;
    double num1, num2;
    int ret;

   
    printf("Enter an operator (+, -, *, /): ");
    ret = scanf(" %c", &op);
    if (ret != 1) {
        printf("Error! Invalid input.\n");
        return 1;
    }

   
    if (getchar() != '\n') {
        printf("Error! Only one operator is allowed.\n");
        return 1;
    }

   
    printf("Enter two operands: ");
    ret = scanf("\n%lf\n %lf", &num1, &num2);
    if (ret != 2) {
        printf("Error! Invalid operands.\n");
        return 1;
    }

    double result = simpleCalc(num1, num2, op);
    if (result != INT_MIN) { 
        printf("Result: %.2lf\n", result);
    }

return 0;
}