// Find the sum of odd index numbers in an array
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 1; i < 5; i += 2) {
        sum += arr[i];
    }
    printf("Sum of odd index numbers: %d\n", sum);
    return 0;
}