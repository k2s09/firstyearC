// Largest and smallest in an array
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int min = arr[0];
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
}