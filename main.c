#include <stdio.h>
#include "add.h"



int main() {
    int num1 = 5;
    int num2 = 7;
    int sum = add(num1, num2);
    
    printf("La somme de %d et %d est : %d\n", num1, num2, sum);
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]); // Taille du tableau
    int target = 10;

    // Appeler la fonction de recherche binaire
    int index = binary_search(arr, size, target);

    if (index != -1) {
        printf("La cible %d a été trouvée à l'index %d\n", target, index);
    } else {
        printf("La cible %d n'a pas été trouvée\n", target);
    }
	print_seconds();
    return 0;
}
