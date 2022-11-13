//Program to find root of a quadratic equation
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, term1, term2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf\nroot2 = %.2lf\n\n", root1, root2);
    }
    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf\n\n", root1);
    }
    else
    {
        term1 = -b / (2 * a);
        term2 = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi\nroot2 = %.2f-%.2fi\n\n", term1, term2, term1, term2);
    }
    return 0;
}