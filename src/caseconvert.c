// Write a program to change all lower-case letters into upper case in a sentence.
#include <stdio.h>
int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] -= 32;
        }
    }
    printf("The sentence in upper case is: %s\n", sentence);
    return 0;
}