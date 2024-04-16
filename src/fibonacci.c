// Write a program to print the Fibonacci numbers with a loop.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}