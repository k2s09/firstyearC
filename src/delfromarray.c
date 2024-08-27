#include <stdlib.h>
#include <stdio.h>

void del(int arr[], int pos, int len) {
    if(pos < 0 || pos >= len) {
        printf("Invalid position\n");
        exit(0);
    }
    for(int i = pos; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[len - 1] = 0;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    del(arr, 5, len);
    for(int i = 0; i < len - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
