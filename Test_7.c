#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 9;
    int num2 = 7;

    // Call the sum function with num1 and num2 as arguments
    int result = sum(num1, num2);

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
