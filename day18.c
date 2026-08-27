/*Q35. Write a program to print all factors of a given number.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

/*Q36. Write a program to find the HCF (GCD) of two numbers*/

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Please enter valid positive integers.\n");
        return 1;
    }

    a = num1;
    b = num2;

    // Euclidean Algorithm to find GCD/HCF
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, a);

    return 0;
}

