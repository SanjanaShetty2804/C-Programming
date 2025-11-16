#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.0, amount;

    printf("Welcome to Simple Banking System\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your current balance is: %.2lf\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            balance += amount;
            printf("New Balance: %.2lf\n", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);
            if (amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful. Remaining Balance: %.2lf\n", balance);
            } else {
                printf("Insufficient balance!\n");
            }
            break;

        case 4:
            printf("Exiting... Thank you!\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}