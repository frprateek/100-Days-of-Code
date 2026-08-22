/*Q7. Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int main() {
    int a, b;
    
    if (scanf("%d %d", &a, &b) == 2) {
        // Swapping using arithmetic operations
        a = a + b;
        b = a - b;
        a = a - b;
        
        printf("After swap: %d %d\n", a, b);
    }
    
    return 0;
}

/*Q8. Write a program to find and display the sum of the first n natural numbers*/

#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) == 1) {
        // Using the formula: Sum = n * (n + 1) / 2
        // Casting to long long to prevent integer overflow for large values of n
        long long sum = (long long)n * (n + 1) / 2;
        
        printf("Sum = %lld\n", sum);
    }
    
    return 0;
}

