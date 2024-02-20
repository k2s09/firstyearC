// Write a program to calculate the area of a circle, a rectangle, or a triangle depending on the user's choice
#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float area, radius, length, breadth, base, height;
    printf("Enter your choice: \n1. Area of circle\n2. Area of rectangle\n3. Area of triangle\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area of the circle is %f\n", area);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("The area of the rectangle is %f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is %f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}