/*Q25. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    // Input format: <num1> <operator> <num2> (e.g., 10 + 5)
    if (scanf("%d %c %d", &num1, &op, &num2) == 3) {
        switch (op) {
            case '+':
                printf("Result = %d\n", num1 + num2);
                break;
            case '-':
                printf("Result = %d\n", num1 - num2);
                break;
            case '*':
                printf("Result = %d\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("Result = %d\n", num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case '%':
                if (num2 != 0) {
                    printf("Result = %d\n", num1 % num2);
                } else {
                    printf("Error: Modulo by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator '%c'. Use +, -, *, /, or %%.\n", op);
                break;
        }
    }

    return 0;
}

/*Q26. Write a program to print numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

