// Sort an array using optimised bubble sort.
#include <stdio.h>
int main () {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int flag = 0, temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag++;
            }
        }
        if (flag == 0)
            break;
        else
            flag = 0;
    }
    printf("Printing the sorted elements: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}