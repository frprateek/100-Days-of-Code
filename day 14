/*Q27. Write a program to print the sum of the first n odd numbers.*/

#include <stdio.h>

int main() {
    long long n;
    
    printf("Enter n: ");
    scanf("%lld", &n);
    
    long long sum = n * n;
    
    printf("Sum of first %lld odd numbers: %lld\n", n, sum);
    
    return 0;
}

/*Q28. Write a program to print the product of even numbers from 1 to n*/

#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d is: %llu\n", n, product);

    return 0;
}
