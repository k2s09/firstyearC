#include <stdio.h>
// Take number of seconds as input and give the result in hours, minutes and seconds
int main()
{
    int seconds, hours, minutes;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;
    printf("The time is %d hours, %d minutes and %d seconds\n", hours, minutes, seconds);
    return 0;
}