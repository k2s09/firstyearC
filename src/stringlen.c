// Write a program to find the string length of a string without using the predefined function.
#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        printf("The length of the string is %d\n", i);
    return 0;
}