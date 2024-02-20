// Write a program to calculate internet browsing bill . Conditions are given below.
// Minimum: Rs. 200 for upto 100 calls
// Plus Rs. 0.60 per call for next 50 calls
// Plus Rs. 0.50 per call for next 50 calls
// Plus Rs. 0.40 per call for calls beyond 200
// Write a program to calculate the internet browsing bill for the given number of calls.
// The program should take the number of calls as input and display the bill amount as output.
#include <stdio.h>
int main() {
    int calls;
    float bill;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);
    if (calls <= 100) {
        bill = 200;
    } else if (calls <= 150) {
        bill = 200 + (calls - 100) * 0.60;
    } else if (calls <= 200) {
        bill = 200 + 50 * 0.60 + (calls - 150) * 0.50;
    } else {
        bill = 200 + 50 * 0.60 + 50 * 0.50 + (calls - 200) * 0.40;
    }
    printf("The bill amount is %f\n", bill);
    return 0;
}