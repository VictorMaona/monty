#include <stdio.h>

/**
 * main - user supplied digits adds them and publishes outcome.
 * Description: user of the program is prompted to enter two digits.
 * Return: Constantly 0 denotes successful execution.
 */
int main() {
    int digit1, digit2;

    printf("Enter the first digit: ");
    scanf("%d", &digit1);

    printf("Enter the second digit: ");
    scanf("%d", &digit2);

    int sum = digit1 + digit2;

    if (sum >= 10) {
        sum %= 10;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
