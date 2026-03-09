#include <stdio.h>

int main() {

    float num1, num2, result;
    int choice;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if(choice == 1) {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    }
    else if(choice == 2) {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    }
    else if(choice == 3) {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    }
    else if(choice == 4) {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}