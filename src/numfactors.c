// 5. Write a program to take two numbers as an input and find whether one number is a multiple of the other or not.
// Example: 10, 5 => 10 is a multiple of 5
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a % b == 0) {
        printf("%d is a multiple of %d\n", a, b);
    } else if (b % a == 0) {
        printf("%d is a multiple of %d\n", b, a);
    } else {
        printf("Neither %d nor %d is a multiple of the other\n", a, b);
    }
}