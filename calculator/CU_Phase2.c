#include <stdio.h>
#include <math.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}
int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}
float power(float base, float exp) {
    return pow(base, exp);
}

int main() {
    float num1, num2, result;
    char op, choice;

    do {
        printf("\n--- Simple CLI Calculator ---\n");
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter operation (+ - * / %% ^): ");
        scanf(" %c", &op);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (op) {
            case '+': result = add(num1, num2); break;
            case '-': result = subtract(num1, num2); break;
            case '*': result = multiply(num1, num2); break;
            case '/': result = divide(num1, num2); break;
            case '%': result = modulus((int)num1, (int)num2); break;
            case '^': result = power(num1, num2); break;
            default:
                printf("Invalid operator!\n");
                continue;
        }

        printf("Result: %.2f\n", result);

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}
