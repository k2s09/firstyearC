// Write a program to concatenate/length/copy two strings using the library function.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("The concatenated string is: %s\n", strcat(str1, str2));
    printf("The length of the first string is: %d\n", strlen(str1));
    printf("The length of the second string is: %d\n", strlen(str2));
    char str3[100];
    strcpy(str3, str1);
    printf("The copied string is: %s\n", str3);
    return 0;
}