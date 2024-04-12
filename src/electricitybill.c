// Write a program to calculate the amount of an electricity bill for the following criteria. (Without Loop)
// Units					Charge per unit (Rs.)
// First, 1-100 up to		1.5
// Next, 101-200 up to		2.5
// Next, 201-400 up to		3.5
// Use Switch Case
#include <stdio.h>
int main() {
    int units;
    float charge;
    printf("Enter the number of units: ");
    scanf("%d", &units);
    switch (units / 100) {
        case 0:
            charge = 1.5;
            break;
        case 1:
            charge = 2.5;
            break;
        case 2:
            charge = 3.5;
            break;
        default:
            charge = 4.5;
    }
    printf("The amount of electricity bill is Rs. %.2f\n", units * charge);
    return 0;
}