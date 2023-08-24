#include <stdio.h>

/**
 * main - user supplied digits adds them and publishes outcome.
 *
 * Description: user of this program is prompted to enter two digits.
 *
 * Return: Constantly 0 denotes successful execution.
 */
int main() {
    int digit1, digit2;
    
    // demand that user enter the first digit
    printf("Enter the first digit: ");
    scanf("%d", &digit1);
    
    // Request the second digit from the user.
    printf("Enter the second digit: ");
    scanf("%d", &digit2);
    
    // Determine the two digits' sum.
    int sum = digit1 + digit2;
    
    // Make sure the total is one digit shorter than 10.
    if (sum >= 10) {
        sum %= 10;
    }
    
    // Print the outcome
    printf("Sum: %d\n", sum);
    
    return 0;
}
