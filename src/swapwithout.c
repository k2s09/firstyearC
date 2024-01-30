// Swap two variables without using a third variable
#include <stdio.h>
int main() {
    int a = 1, b = 2;
    printf("Before swap: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a = %d, b = %d\n", a, b);
}