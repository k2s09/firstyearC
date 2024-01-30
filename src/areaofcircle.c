// Find the area of a circle
#include <stdio.h>
#include <math.h>
int main() {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.14 * pow(radius, 2);
    printf("Area of circle with radius %.2f is %.2f\n", radius, area);
}