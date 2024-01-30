// 6. Write a program that returns a letter grade based on a quiz score. The input will be the integer score from a ten-point quiz.
//    - The letter grades are assigned by:
//    - 9-10 "A" 7-8 "B" 5-6 "C" 3-4 "D" <3 "F"
#include <stdio.h>
int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score >= 9) {
        printf("A\n");
    } else if (score >= 7) {
        printf("B\n");
    } else if (score >= 5) {
        printf("C\n");
    } else if (score >= 3) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}