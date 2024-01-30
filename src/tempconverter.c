// Program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
#include <stdio.h>
int main() {
    int choice;
    printf("Enter 1 to convert from Fahrenheit to Celsius\n");
    printf("Enter 2 to convert from Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int temperature;
    printf("Enter temperature: ");
    scanf("%d", &temperature);
    int convertedTemperature;
    if (choice == 1) {
        convertedTemperature = fahrenheitToCelsius(temperature);
        printf("%d Fahrenheit = %d Celsius\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        convertedTemperature = celsiusToFahrenheit(temperature);
        printf("%d Celsius = %d Fahrenheit\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice\n");
    }
}
int fahrenheitToCelsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
int celsiusToFahrenheit(int celsius) {
    return celsius * 9 / 5 + 32;
}