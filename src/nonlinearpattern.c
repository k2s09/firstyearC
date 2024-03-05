#include <stdio.h>
int main() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        printf("%d\t", i);
        num = num+i;
        for(int j = 2; j <= i; j++) {
            printf("%d\t", num++);
        }
        printf("\n");
    }
}