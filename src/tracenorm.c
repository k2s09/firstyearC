// Write a program to find the trace and norm of a given square matrix. 
// Hint: Trace = sum of principal diagonal elements 
// Norm = sort (sum of squares of the individual elements of an array)
#include <stdio.h>
#include <math.h>
int main() {
    int i, j, n;
    float trace = 0, norm = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        trace += a[i][i];
        for (j = 0; j < n; j++) {
            norm += pow(a[i][j], 2);
        }
    }
    norm = sqrt(norm);
    printf("The trace of the matrix is %.2f\n", trace);
    printf("The norm of the matrix is %.2f\n", norm);
    return 0;
}