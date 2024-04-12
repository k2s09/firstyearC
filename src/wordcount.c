// Write a program to count the number of words in a sentence.
#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a sentence: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("The number of words in the sentence is %d\n", count + 1);
    return 0;
}