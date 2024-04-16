// Write a program to take N as input and print the odd numbers in decreasing order.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}