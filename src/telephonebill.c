// Write a program to calculate an amount of a telephone bill for the following criteria. (Without Loop)
// Calls		charge per call (Rs.)
// 1-150		0
// 151-250		.9
// 251-400		1.2
// >400		1.5
#include <stdio.h>
int main() {
    int calls;
    float charge;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);
    if (calls >= 1 && calls <= 150) {
        charge = 0;
    } else if (calls >= 151 && calls <= 250) {
        charge = 0.9;
    } else if (calls >= 251 && calls <= 400) {
        charge = 1.2;
    } else {
        charge = 1.5;
    }
    printf("The amount of telephone bill is Rs. %.2f\n", calls * charge);
    return 0;
}