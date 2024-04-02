// Write a program to check if the given matrix is a magic square or not 
// Sum of each diagonal, column and row is same.
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
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[0][i];
    }
    int flag = 0;
    for(int i = 0; i < n; i++) {
        int rowsum = 0;
        int colsum = 0;
        for(int j = 0; j < n; j++) {
            rowsum += arr[i][j];
            colsum += arr[j][i];
        }
        if(rowsum != sum || colsum != sum) {
            flag = 1;
            break;
        }
    }
    int diagsum1 = 0, diagsum2 = 0;
    for(int i = 0; i < n; i++) {
        diagsum1 += arr[i][i];
        diagsum2 += arr[i][n-i-1];
    }
    if(diagsum1 != sum || diagsum2 != sum) {
        flag = 1;
    }
    if(flag == 0) {
        printf("Magic Square\n");
    } else {
        printf("Not a Magic Square\n");
    }
    return 0;
}