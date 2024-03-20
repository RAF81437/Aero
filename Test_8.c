#include <stdio.h>

#define SIZE 5

// Function to search for a value in an array list
int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[SIZE] = {2, 4, 6, 8, 6, 10};
    int target = 6;

    int index = search(arr, SIZE, target);
    if (index != -1) {
        printf("Target %d found at index %d\n", target, index);
    } else {
        printf("Target %d not found\n", target);
    }

    return 0;
}
