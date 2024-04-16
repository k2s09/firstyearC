// 7. Write a program that takes three sides of a triangle input and calculate its area, 
// if these conditions are satisfied, a+b>c, b+c>a, a+c>b, calculate area=(a+b+c)/2.
#include <stdio.h>
int main() {
    float a, b, c, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) {
        area = (a + b + c) / 2;
        printf("The area of the triangle is %.2f\n", area);
    } else {
        printf("The sides do not form a triangle\n");
    }
    return 0;
}