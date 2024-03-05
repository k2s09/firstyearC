// Find the roots of a quadratic equation
#include <stdio.h>
int main() {
    float a, b, c, D, root1, root2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are %.2f and %.2f\n", root1, root2);
    } else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are %.2f and %.2f\n", root1, root2);
    } else {
        printf("Roots are imaginary\n");
    }
}
