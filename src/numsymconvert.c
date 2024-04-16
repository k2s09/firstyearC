// Write a program to convert numbers between binary and decimal.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
        int decimal = 0, base = 1;
        while (n > 0) {
            int rem = n % 10;
            decimal += rem * base;
            n /= 10;
            base *= 2;
        }
        printf("%d\n", decimal);
    } else {
        int binary = 0, base = 1;
        while (n > 0) {
            int rem = n % 2;
            binary += rem * base;
            n /= 2;
            base *= 10;
        }
        printf("%d\n", binary);
    }
    return 0;
}