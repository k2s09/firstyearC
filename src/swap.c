#include <stdio.h>
int main() {
    swap(1, 2);
}
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
}