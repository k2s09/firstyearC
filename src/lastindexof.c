// Write a program to find the last occurrence of a particular character.
#include <stdio.h>
int main() {
    char str[100], ch;
    int i, index = -1;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            index = i;
        }
    }
    if (index == -1) {
        printf("The character is not found in the string\n");
    } else {
        printf("The last occurrence of the character is at index %d\n", index);
    }
    return 0;
}