// Write a program to multiply two matrices.
#include <stdio.h>
int main() {
    int i1, j1, i2, j2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &i1, &j1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &i2, &j2);
    if (j1 != i2) {
        printf("The matrices cannot be multiplied\n");
        exit(0);
    }
    int a[i1][j1], b[i2][j2], c[i1][j2];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < i1; i++) {
        for (int j = 0; j < j1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < i2; i++) {
        for (int j = 0; j < j2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < i1; i++) {
        for (int j = 0; j < j2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < j1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the two matrices is:\n");
    for (int i = 0; i < i1; i++) {
        for (int j = 0; j < j2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}