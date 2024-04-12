// Write a program to check whether the given character is a vowel, consonant, or digit.
#include <stdio.h>
int main() {
	printf("Enter the char");
	char c;
	scanf("%c",c);
	if (c >= 48 && c <= 57) {
		printf("The given character is a digit");
		exit(0);
	} else if (c >= 97 && c <= 122) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			printf("The given character is a vowel");
			exit(0);
		}
	} else if (c >= 65 && c <= 90) {
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			printf("The given character is a vowel");
			exit(0);
		}
	} else {
		printf("The given character is a consonant");
	}
}
