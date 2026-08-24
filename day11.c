/*Q21. Write a program to display the month name and number of days using switch-case for a given month number.*/

#include <stdio.h>

int main() {
    int month;

    if (scanf("%d", &month) == 1) {
        switch (month) {
            case 1:
                printf("January - 31 days\n");
                break;
            case 2:
                printf("February - 28 or 29 days\n");
                break;
            case 3:
                printf("March - 31 days\n");
                break;
            case 4:
                printf("April - 30 days\n");
                break;
            case 5:
                printf("May - 31 days\n");
                break;
            case 6:
                printf("June - 30 days\n");
                break;
            case 7:
                printf("July - 31 days\n");
                break;
            case 8:
                printf("August - 31 days\n");
                break;
            case 9:
                printf("September - 30 days\n");
                break;
            case 10:
                printf("October - 31 days\n");
                break;
            case 11:
                printf("November - 30 days\n");
                break;
            case 12:
                printf("December - 31 days\n");
                break;
            default:
                printf("Invalid input! Please enter a number between 1 and 12.\n");
                break;
        }
    }

    return 0;
}

/*Q22. Write a program to find profit or loss percentage given cost price and selling price.*/

#include <stdio.h>

int main() {
    double cp, sp;

    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (cp <= 0) {
            printf("Invalid Cost Price! Cost price must be greater than zero.\n");
        } else if (sp > cp) {
            double profit = sp - cp;
            double profit_percent = (profit / cp) * 100.0;
            printf("Profit = %.2f\n", profit);
            printf("Profit Percentage = %.2f%%\n", profit_percent);
        } else if (cp > sp) {
            double loss = cp - sp;
            double loss_percent = (loss / cp) * 100.0;
            printf("Loss = %.2f\n", loss);
            printf("Loss Percentage = %.2f%%\n", loss_percent);
        } else {
            printf("No Profit, No Loss\n");
        }
    }

    return 0;
}

