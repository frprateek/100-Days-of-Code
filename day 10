/*Q19. Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths*/

#include <stdio.h>

int main() {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        // First check the triangle inequality theorem for validity
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                printf("Equilateral Triangle\n");
            } else if (a == b || b == c || a == c) {
                printf("Isosceles Triangle\n");
            } else {
                printf("Scalene Triangle\n");
            }
        } else {
            printf("Not a valid triangle\n");
        }
    }

    return 0;
}

/*Q20. Write a program to display the day of the week based on a number (1–7) using switch-case*/

#include <stdio.h>

int main() {
    int day;

    if (scanf("%d", &day) == 1) {
        switch (day) {
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
                printf("Invalid input! Please enter a number between 1 and 7.\n");
                break;
        }
    }

    return 0;
}

