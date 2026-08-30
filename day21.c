/*Q41. Write a program to swap the first and last digit of a number*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long long num, temp;
    
    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int is_negative = (num < 0);
    temp = llabs(num);

    // Single-digit numbers remain unchanged
    if (temp < 10) {
        printf("Swapped number: %lld\n", num);
        return 0;
    }

    int last_digit = temp % 10;
    int digits = (int)log10(temp);
    long long power_of_10 = (long long)pow(10, digits);
    int first_digit = temp / power_of_10;

    // Remove first and last digit to get the middle section
    long long middle = (temp % power_of_10) / 10;

    // Construct the swapped number
    long long swapped = (last_digit * power_of_10) + (middle * 10) + first_digit;

    if (is_negative) {
        swapped = -swapped;
    }

    printf("Original number: %lld\n", num);
    printf("Swapped number:  %lld\n", swapped);

    return 0;
}

/*Q42. Write a program to check if a number is a perfect number*/

#include <stdio.h>

int main() {
    long long num;
    long long sum = 1; // 1 is a proper divisor for all integers > 1

    printf("Enter a positive integer: ");
    if (scanf("%lld", &num) != 1 || num <= 1) {
        printf("%lld is NOT a perfect number.\n", num);
        return 0;
    }

    // Find divisors up to sqrt(num)
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            // Add the paired divisor if it's distinct
            if (i * i != num) {
                sum += (num / i);
            }
        }
    }

    if (sum == num) {
        printf("%lld is a PERFECT number.\n", num);
    } else {
        printf("%lld is NOT a perfect number.\n", num);
    }

    return 0;
}

