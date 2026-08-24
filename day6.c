/*Q11. Write a program to input an integer and check whether it is even or odd using if–else*/

#include <stdio.h>

int main() {
    int num;

    if (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d is Even\n", num);
        } else {
            printf("%d is Odd\n", num);
        }
    }

    return 0;
}

/*Q12. Write a program to input an integer and check whether it is positive, negative or zero using nested if–else*/

#include <stdio.h>

int main() {
    int num;

    if (scanf("%d", &num) == 1) {
        if (num >= 0) {
            if (num == 0) {
                printf("Zero\n");
            } else {
                printf("Positive\n");
            }
        } else {
            printf("Negative\n");
        }
    }

    return 0;
}

