#include <stdio.h>
#include "clion/math.h"

int main() {
    float number1, number2, result;
    char operator;
    do {
        printf("Enter a mathematical expression using operator(+,-,*,/,^,$): ");
        scanf("%f%c%f", &number1, &operator, &number2);
        switch (operator) {
            case '+':
                result = add(number1, number2);
                break;
            case '-':
                result = subtract(number1, number2);
                break;
            case '*':
                result = multiply(number1, number2);
                break;
            case '/':
                result = divide(number1, number2);
                break;
            case '^':
                result = power(number1, number2);
                break;
            case '$':
                result = recursivePower(number1, number2);
                break;
        }
        printf("Result: %.2f\n", result);
    } while (1);
    return 0;
}

