#include <stdio.h>

int main() {
    // Assign a value to a variable
    int myVariable = 42;
    
    // Print the value of the variable
    printf("Value of myVariable: %d\n", myVariable);

    // Print the memory address of the variable
    printf("Memory address of myVariable: %p\n", (void*)&myVariable);

    return 0;
}
