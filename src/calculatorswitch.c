// Write a program to design a calculator that performs addition, subtraction and division operation. This program inputs two oeprands and an operators then displays the calculated results.
#include <stdio.h>
int main() {
    float num1, num2, result;
    char op;
    printf("Enter the operator (+, -, /): ");
    scanf("%c", &op);
    printf("Enter the two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("The sum of %f and %f is %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference of %f and %f is %f\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("The division of %f and %f is %f\n", num1, num2, result);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}