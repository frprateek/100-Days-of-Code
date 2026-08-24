/*Q31. Write a program to take a number as input and print its equivalent binary representation*/

#include <stdio.h>

int main() {
    unsigned int num;
    int binary[32];
    int i = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%u", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Store binary digits (remainders) in the array
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print array in reverse order to get the binary form
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

/*Write a program to check if a number is a palindrome.*/

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Negative numbers are typically not considered palindromes
    if (num < 0) {
        printf("%d is not a palindrome.\n", num);
        return 0;
    }

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Compare original number with the reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

