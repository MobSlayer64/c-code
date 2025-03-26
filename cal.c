#include <limits.h>
#include <stdio.h>

// Function that implements the simple calculator
double simpleCalc(double num1, double num2, char op) {
    double result; // Use double to match the return type

    // Perform the corresponding operation
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
        // Check for division by zero
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Error! Division by zero.\n");
            return INT_MIN; // Return a special value to indicate an error
        }
    }
    else {
        printf("Error! Operator is not correct.\n");
        return INT_MIN; // Return a special value to indicate an error
    }

    return result;
}

int main() {
    char op;
    double num1, num2;
    int ret;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    ret = scanf(" %c", &op); // Added a space before %c to ignore leading whitespace
    if (ret != 1) {
        printf("Error! Invalid input.\n");
        return 1;
    }

    // Check if the operator input is a single valid character
    if (getchar() != '\n') {
        printf("Error! Only one operator is allowed.\n");
        return 1;
    }

    // Read the two numbers
    printf("Enter two operands: ");
    ret = scanf("\n%lf\n %lf", &num1, &num2);
    if (ret != 2) {
        printf("Error! Invalid operands.\n");
        return 1;
    }

    double result = simpleCalc(num1, num2, op);
    if (result != INT_MIN) { // Check for error code from simpleCalc
        printf("Result: %.2lf\n", result);
    }

return 0;
}