// Write a program to take an input of array of 10 elements. Split it in the middle and store the elements in two different arrays.
// The first half of the array should be stored in the first array and the second half of the array should be stored in the second array.
#include <stdio.h>
int main() {
    int n = 10;
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int arr1[n/2], arr2[n/2];
    for(int i = 0; i < n/2; i++) {
        arr1[i] = arr[i];
    }
    for(int i = n/2; i < n; i++) {
        arr2[i-n/2] = arr[i];
    }
    for(int i = 0; i < n/2; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < n/2; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}