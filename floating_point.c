#include <stdio.h>

int main() {
    // Define two decimal numbers
    float num1 = 5.25;
    float num2 = 2.75;

    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;

    // Print the results
    printf("Number 1: %.2f\n", num1);
    printf("Number 2: %.2f\n", num2);
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
