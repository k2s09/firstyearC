// Write a program to reverse a string
#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, j;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        rev[i] = str[i];
    }
    rev[i] = '\0';
    for (i = 0, j = i - 1; i < j; i++, j--) {
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
    }
    printf("The reversed string is: %s\n", rev);
    return 0;
}