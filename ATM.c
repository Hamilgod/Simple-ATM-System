#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void checkBalance(float balance);
void withdraw(float *balance);
void deposit(float *balance);

int main() {
    int pin = 1234, enteredPin, choice;
    float balance = 1000.0;  // Starting balance

    printf("Welcome to the ATM!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    // Check if the PIN is correct
    if (enteredPin == pin) {
        do {
            // Menu options
            printf("\nATM Menu:\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw Money\n");
            printf("3. Deposit Money\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    checkBalance(balance);
                    break;
                case 2:
                    withdraw(&balance);
                    break;
                case 3:
                    deposit(&balance);
                    break;
                case 4:
                    printf("Thank you for using the ATM. Goodbye!\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != 4);
    } else {
        printf("Incorrect PIN. Access denied.\n");
    }

    return 0;
}

// Function to check balance
void checkBalance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

// Function to withdraw money
void withdraw(float *balance) {
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);

    // Check if the balance is sufficient
    if (amount <= *balance) {
        *balance -= amount;
        printf("You have withdrawn $%.2f. Your new balance is: $%.2f\n", amount, *balance);
    } else {
        printf("Insufficient balance.\n");
    }
}

// Function to deposit money
void deposit(float *balance) {
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);
    
    *balance += amount;
    printf("You have deposited $%.2f. Your new balance is: $%.2f\n", amount, *balance);
}
