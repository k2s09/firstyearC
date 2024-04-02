// Write a program to find whether a given matrix is symmetric or not.
// Compare the matrix to it's transpose
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] != arr[j][i]) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            break;
        }
    }
    if(flag == 0) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }
    return 0;
}