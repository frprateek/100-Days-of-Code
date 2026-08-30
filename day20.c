/*Write a program to find the product of odd digits of a number*/

#include <stdio.h>
#include <stdlib.h>

long long product_of_odd_digits(long long n) {
    long long temp = llabs(n);
    long long prod = 1;
    int found = 0;

    while (temp > 0) {
        int d = temp % 10;
        if (d % 2 != 0) {
            prod *= d;
            found = 1;
        }
        temp /= 10;
    }

    return found ? prod : 0; // returns 0 if no odd digits exist
}

int main() {
    long long num = 1354;
    printf("Product of odd digits in %lld: %lld\n", num, product_of_odd_digits(num));
    return 0;
}

/*Write a program to find the 1’s complement of a binary number and print it*/

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int isValid = 1;

    printf("Enter a binary number: ");
    if (scanf("%99s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check validity and invert bits
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            isValid = 0;
            break;
        }
    }

    if (!isValid) {
        printf("Error: Input is not a valid binary number.\n");
        return 1;
    }

    // Compute and display 1's complement
    printf("1's Complement: ");
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
