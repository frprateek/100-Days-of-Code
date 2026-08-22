/*Q9. Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;

    // Input principal amount, annual interest rate (in %), and time period (in years)
    if (scanf("%lf %lf %lf", &principal, &rate, &time) == 3) {
        // Simple Interest: SI = (P * R * T) / 100
        double simple_interest = (principal * rate * time) / 100.0;

        // Compound Interest: CI = P * (1 + R / 100)^T - P
        double amount = principal * pow(1.0 + (rate / 100.0), time);
        double compound_interest = amount - principal;

        printf("Simple Interest = %.2f\n", simple_interest);
        printf("Compound Interest = %.2f\n", compound_interest);
    }

    return 0;
}

/*Q10. Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>

int main() {
    int total_seconds;

    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int remaining_seconds = total_seconds % 3600;
        int minutes = remaining_seconds / 60;
        int seconds = remaining_seconds % 60;

        // %02d ensures leading zeros for single-digit values (e.g., 01:05:09)
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }

    return 0;
}

