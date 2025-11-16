#include <stdio.h>

/*This tells the C compiler:
“Include the standard input/output library.”
This library gives you access to:
printf() – to print things to the screen
scanf() – to read input from the user
You need this in almost every C program that uses input/output.*/

/*This is the starting point of every C program.
main() is a function — and every C program begins from here.
The int before main means the function returns an integer value
back to the system when the program ends.
So it’s like saying:
"Start here. When done, give a number (usually 0) back to the 
system to say 'I finished successfully.'"
The opening { means:
"Now begin the block of code that belongs to main."
*/
int main() {
    float num1, num2; // declaration of two variables
    char op;          // declaration of operation
    char ch;          // declaration of choice

    // start a loop that runs at least once before terminating
    do {
        // heading 
        printf("SIMPLE CALCULATOR\n");
        
        // ASK FOR NUM1
        printf("Enter first number: ");
        scanf("%f", &num1);  // stores float value at address num1

        // operation
        printf("Enter operation (+ - * /): ");
        scanf(" %c", &op); 

        // num2
        printf("Enter second number: ");
        scanf("%f", &num2);

        // handling choice of operation
        // %.2f == 2 decimal places
        switch(op) {
            case '+':
                printf("Result: %.2f\n", num1 + num2);
                break;
            case '-':
                printf("Result: %.2f\n", num1 - num2);
                break;
            case '*':
                printf("Result: %.2f\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("Result: %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid operation.\n");
        }

        // Ask if user wants to calculate again
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &ch);

    } while(ch == 'y' || ch == 'Y');  // Keep looping if user said yes

    // Exit message
    printf("Thanks for using the calculator!\n");

    return 0;
}
