// Write a program to print the subarray that lies between the two indexes. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int start, end;
    printf("Enter the starting index: ");
    scanf("%d", &start);
    printf("Enter the ending index: ");
    scanf("%d", &end);
    if (start < 0 || end >= n) {
        printf("Invalid index\n");
    } else {
        printf("The subarray is: ");
        for (int i = start; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}