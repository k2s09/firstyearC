// Write a program to program the input the number of week days (1-7) and translate to its equivalent name of the day of the week (1 - Monday, 2 - Tuesday)
#include <stdio.h>
int main() {
    int day;
    printf("Enter the number of the day of the week (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}