/*Q13. Write a program to input a year and check whether it is a leap year or not using conditional statements*/

#include <stdio.h>

int main() {
    int year;

    if (scanf("%d", &year) == 1) {
        // A leap year is divisible by 4, but not by 100, unless it is also divisible by 400
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("%d is a Leap Year\n", year);
        } else {
            printf("%d is not a Leap Year\n", year);
        }
    }

    return 0;
}

/*Q14. Write a program to input a character and check whether it is a vowel or consonant using if–else*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    if (scanf(" %c", &ch) == 1) {
        // Convert to lowercase to handle both uppercase and lowercase inputs
        char lower_ch = tolower(ch);

        // Check if the character is an alphabet letter
        if (lower_ch >= 'a' && lower_ch <= 'z') {
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
                printf("%c is a Vowel\n", ch);
            } else {
                printf("%c is a Consonant\n", ch);
            }
        } else {
            printf("%c is not an alphabet\n", ch);
        }
    }

    return 0;
}

