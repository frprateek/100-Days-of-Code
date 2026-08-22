/*Q23. Write a program to calculate library fine based on late daya*/

#include <stdio.h>

int main() {
    int days;

    if (scanf("%d", &days) == 1) {
        if (days < 0) {
            printf("Invalid input! Days cannot be negative.\n");
        } else if (days == 0) {
            printf("No fine.\n");
        } else if (days <= 5) {
            int fine = days * 2;
            printf("Fine = Rs. %d\n", fine);
        } else if (days <= 10) {
            // First 5 days @ Rs. 2 + remaining days @ Rs. 4
            int fine = (5 * 2) + ((days - 5) * 4);
            printf("Fine = Rs. %d\n", fine);
        } else if (days <= 30) {
            // First 5 days @ Rs. 2 + next 5 days @ Rs. 4 + remaining days @ Rs. 6
            int fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
            printf("Fine = Rs. %d\n", fine);
        } else {
            printf("Membership Cancelled\n");
        }
    }

    return 0;
}

/*Q24. Write a program to calculate electricity bill based on units consumed with rates*/

#include <stdio.h>

int main() {
    double units;

    if (scanf("%lf", &units) == 1) {
        if (units < 0) {
            printf("Invalid input! Units consumed cannot be negative.\n");
            return 0;
        }

        double bill = 0.0;

        if (units <= 100) {
            bill = units * 5.0;
        } else if (units <= 200) {
            // First 100 @ Rs. 5 + remaining @ Rs. 7
            bill = (100 * 5.0) + ((units - 100) * 7.0);
        } else if (units <= 300) {
            // First 100 @ Rs. 5 + Next 100 @ Rs. 7 + remaining @ Rs. 10
            bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
        } else {
            // First 100 @ Rs. 5 + Next 100 @ Rs. 7 + Next 100 @ Rs. 10 + remaining @ Rs. 12
            bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
        }

        printf("Total Electricity Bill = Rs. %.2f\n", bill);
    }

    return 0;
}

