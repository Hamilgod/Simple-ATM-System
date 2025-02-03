#include <stdio.h>

// Function prototypes
void add(float num1, float num2);
void subtract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);

int main() {
    int choice;
    float num1, num2;

    printf("Welcome to the Basic Calculator!\n");

    do {
        // Display the menu
        printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            // Get input numbers from the user
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        // Perform the selected operation
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function definitions
void add(float num1, float num2) {
    printf("Result: %.2f\n", num1 + num2);
}

void subtract(float num1, float num2) {
    printf("Result: %.2f\n", num1 - num2);
}

void multiply(float num1, float num2) {
    printf("Result: %.2f\n", num1 * num2);
}

void divide(float num1, float num2) {
    if (num2 != 0) {
        printf("Result: %.2f\n", num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
