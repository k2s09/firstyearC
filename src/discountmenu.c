// Write a program to calculate the discount in rupees for the following criterion. (Without Loop)
// Use Switch Case
// Cost price	Discount
// \>=800		25%
// 500-800		20%
// <500		0%
#include <stdio.h>
int main() {
    float cost, discount;
    printf("Enter the cost price: ");
    scanf("%f", &cost);
    switch ((int)cost / 100) {
        case 5:
            discount = 0.2;
            break;
        default:
            discount = 0.25;
    }
    printf("The discount is Rs. %.2f\n", cost * discount);
    return 0;
}