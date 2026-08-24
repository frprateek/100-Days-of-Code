/*Q1: Write a program to input two numbers and display their sum./*
#include <stdio.h>

int main() {
    int num1, num2;
    if (scanf("%d %d", &num1, &num2) == 2) {
        int sum = num1 + num2;
        printf("Sum = %d\n", sum);
    }
    return 0;
}


/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient./*
#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int sum = a + b;
        int diff = a - b;
        int product = a * b;
        int quotient = a / b;
        
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
    }
    return 0;
}

