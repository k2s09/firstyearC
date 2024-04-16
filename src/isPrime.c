// Write a program to find whether the given number is prime or not.
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int flag = 0;
    if (n % 2 == 0) {
        flag = 1;
    } else {
        for (int i = 3; i < n/2; i += 2)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
}