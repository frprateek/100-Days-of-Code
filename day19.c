/*Write a program to find the LCM of two numbers*/

#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    // Divide first to prevent integer overflow from (a * b)
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Please enter valid positive integers.\n");
        return 1;
    }

    int result = lcm(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

/*Write a program to find the sum of digits of a number*/

#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n) {
    int sum = 0;
    
    // Handle negative numbers by taking the absolute value
    n = abs(n);

    while (n > 0) {
        sum += n % 10; // Extract the last digit and add to sum
        n /= 10;       // Remove the last digit
    }

    return sum;
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = sum_of_digits(num);
    printf("Sum of digits of %d is: %d\n", num, result);

    return 0;
}
