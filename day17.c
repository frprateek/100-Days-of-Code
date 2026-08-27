/*Write a program to check if a number is an Armstrong number.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    originalNum = num;

    // Count the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Handle the special case for 0 (1 digit: 0^1 = 0)
    if (num == 0) {
        n = 1;
    }

    // Calculate the sum of the power of each digit
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += round(pow(remainder, n));
    }

    // Check if the sum equals the original number
    if ((int)result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}

/*Write a program to check if a number is prime.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check for factors up to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

