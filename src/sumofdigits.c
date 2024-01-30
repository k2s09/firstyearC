// find the sum of digits of a four digit number without using a loop
#include <stdio.h>
int main() {
    int n;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    int sum = 0;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    printf("Sum of digits: %d\n", sum);
}