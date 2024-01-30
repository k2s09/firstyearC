// 4. Write a program to find the total number of days for a given number of months counting from January.
// Example m=3, days = 31 + (28/29) + 31
#include <stdio.h>
int main() {
    int m;
    printf("Enter month number: ");
    scanf("%d", &m);
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int total = 0;
    for (int i = 0; i < m; i++) {
        total += days[i];
    }
    printf("Total days = %d\n", total);
}