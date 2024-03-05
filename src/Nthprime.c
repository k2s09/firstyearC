#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    printf("Enter value of N");
    int N;
    scanf("%d",N);
    int count = 0;
    if (N == 1) {
        printf("Nth prime number is 2");
        exit(0);
    }
    int num = 3;
    while (count < N) {
        int result = 1;
        if (num % 2 == 0) {
            result = 0;
        }
        for (int i = 3; i < pow(num,0.5); i+=2) {
            if (num % i == 0)
                result = 0;
        }
            if (result == 1)
                ++count;
            num+=1;
        }
    printf("Nth prime is:%d\t",num);
}