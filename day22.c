/*Q43. Write a program to check if a number is a strong number*/

#include <stdio.h>

// Function to calculate factorial of a digit
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int temp = num;
    long long sum = 0;

    // Extract each digit and add its factorial
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    if (isStrongNumber(num)) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}

/*Q44. Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // First term is 1
    sum += 1.0;

    // Remaining terms follow the pattern: (2*i - 1) / (2*i) for i = 2 to n
    for (int i = 2; i <= n; i++) {
        double numerator = 2.0 * i - 1.0;
        double denominator = 2.0 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}

