#include <stdio.h>

int main() {
    int integer_num;
    float float_num;
    char single_char;
    char string[100]; // Array to store string (max 99 characters + null terminator)

    // Input integer number
    printf("Enter an integer number: ");
    scanf("%d", &integer_num);

    // Input float number
    printf("Enter a float number: ");
    scanf("%f", &float_num);

    // Clear input buffer to handle the character input correctly
    while (getchar() != '\n'); // Clears leftover newline or characters

    // Input single character
    printf("Enter a single character: ");
    scanf("%c", &single_char);

    // Clear input buffer again for string input
    while (getchar() != '\n');

    // Input string
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Remove trailing newline from string if present
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
        i++;
    }

    // Display all inputs
    printf("\n--- Display Inputs ---\n");
    printf("Integer Number: %d\n", integer_num);
    printf("Float Number: %.2f\n", float_num);
    printf("Single Character: %c\n", single_char);
    printf("String: %s\n", string);

    return 0;
}