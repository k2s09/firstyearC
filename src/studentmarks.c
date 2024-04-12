// Write a program to take 3 student marks in 5 subjects. Print the total marks of each student and the average marks of each subject. 
#include <stdio.h>
int main() {
    int i, j, n = 3, m = 5, total;
    float avg;
    int a[n][m];
    printf("Enter the marks of 3 students in 5 subjects:\n");
    for (i = 0; i < n; i++) {
        total = 0;
        printf("Enter the marks of student %d: ", i + 1);
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            total += a[i][j];
        }
        printf("The total marks of student %d is %d\n", i + 1, total);
    }
    for (j = 0; j < m; j++) {
        total = 0;
        for (i = 0; i < n; i++) {
            total += a[i][j];
        }
        avg = (float) total / n;
        printf("The average marks of subject %d is %.2f\n", j + 1, avg);
    }
    return 0;
}