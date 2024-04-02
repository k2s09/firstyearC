// Check if an array is sorted. First take the input, then check if the array is sorted or not.
// If the array is sorted, print "Sorted" else print "Not Sorted".
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}