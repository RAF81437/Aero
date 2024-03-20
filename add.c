#include "add.h"
#include <time.h>
#include <unistd.h>
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Retourne l'index si la cible est trouvée
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Retourne -1 si la cible n'est pas trouvée
}

void print_seconds() {
    clock_t start_time = clock();
    double elapsed_seconds;

    while (1) {
        elapsed_seconds = (double)(clock() - start_time) / CLOCKS_PER_SEC;
        printf("Secondes depuis l'exécution: %.0f\n", elapsed_seconds);
        sleep(1); // Pause d'une seconde
    }
}