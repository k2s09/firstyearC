// Write a program to find the substring of a given string.
#include <stdio.h>
int main() {
    char str[100], substr[100];
    int i, j, k, flag;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a substring: ");
    gets(substr);
    for (i = 0; str[i] != '\0'; i++) {
        flag = 1;
        for (j = i, k = 0; substr[k] != '\0'; j++, k++) {
            if (str[j] != substr[k]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            break;
        }
    }
    if (flag) {
        printf("The substring is found at position %d\n", i);
    } else {
        printf("The substring is not found\n");
    }
    return 0;
}