// Write a program for searching for an element in the matrix and counting the number of occurrences of that element. 
#include <stdio.h>
int main() {
    int i, j, n, m, x, count = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] == x) {
                count++;
            }
        }
    }
    printf("The element %d occurs %d times in the matrix\n", x, count);
    return 0;
}