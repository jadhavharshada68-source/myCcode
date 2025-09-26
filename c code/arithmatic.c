#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("%d + %d = %d\n", a, b, a + b);   // Addition
    printf("%d - %d = %d\n", a, b, a - b);   // Subtraction
    printf("%d * %d = %d\n", a, b, a * b);   // Multiplication

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);   // Division (integer division)
        printf("%d %% %d = %d\n", a, b, a % b);  // Modulus
    } else {
        printf("Division and modulus by zero are not possible.\n");
    }

    return 0;
}
