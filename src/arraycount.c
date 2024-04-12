// Write a program to find the number of positive numbers, negative numbers, odd numbers, even numbers, and the number of 0 of an array. 
#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, -1, -2, -3, 0, 0};
    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
    printf("Zero: %d\n", zero);
    return 0;
}