// Write a program to arrange the elements of an array in ascending order by simple sorting method.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int min, temp;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Printing the sorted elements: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}