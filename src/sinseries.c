// Write a program to find the sum of n terms of the sin series. sin(x) = x - x^3 + x^5 - x^7
#include <stdio.h>
int main() {
    int x,n;
    printf("Enter value of x");
    scanf("%d",&x);
    printf("Enter value of n");
    scanf("%d",&n);
    float f = x;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0)
            f += -x*x;
        else
            f += x*x;
    }
    printf("value of sin(x) = %f", f);
}