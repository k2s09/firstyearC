// Write a program for converting distance in mm to cm, inch, feet.
#include <stdio.h>
int main() {
    float mm, cm, inch, feet;
    printf("Enter the distance in mm: ");
    scanf("%f", &mm);
    cm = mm / 10;
    inch = cm / 2.54;
    feet = cm / 30.48;
    printf("Distance in cm: %f\n", cm);
    printf("Distance in inch: %f\n", inch);
    printf("Distance in feet: %f\n", feet);
}