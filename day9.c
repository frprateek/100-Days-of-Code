/*Q17. Write a program to find the roots of a quadratic equation and categorize them.*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // Coefficients of the equation ax^2 + bx + c = 0
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a == 0) {
            printf("Invalid input: 'a' cannot be 0 for a quadratic equation.\n");
            return 0;
        }

        double discriminant = (b * b) - (4 * a * c);

        // Real and distinct roots
        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        // Real and equal roots
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root);
        }
        // Complex (imaginary) roots
        else {
            double real_part = -b / (2 * a);
            double imag_part = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and distinct.\n");
            printf("Root 1 = %.2f + %.2fi\n", real_part, imag_part);
            printf("Root 2 = %.2f - %.2fi\n", real_part, imag_part);
        }
    }

    return 0;
}

/*Q18. Write a program that accepts a percentage (0-100) and assigns a grade based on some criteria*/

#include <stdio.h>

int main() {
    float percentage;

    if (scanf("%f", &percentage) == 1) {
        if (percentage < 0 || percentage > 100) {
            printf("Invalid input! Percentage must be between 0 and 100.\n");
        } else if (percentage >= 90) {
            printf("Grade A\n");
        } else if (percentage >= 80) {
            printf("Grade B\n");
        } else if (percentage >= 70) {
            printf("Grade C\n");
        } else if (percentage >= 60) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }

    return 0;
}

