/* 


Write a program in C which is a Menu-Driven Program to perform a simple Arithmetic calculation based on choice 
Choice 1 then Addition 
Choice 2 then subtraction 
Choice 3 then multiplication 
Choice 4 then division

*/

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Display menu
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform calculation based on choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid option (1-4).\n");
    }

    return 0;
}