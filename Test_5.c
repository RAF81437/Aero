#include <stdio.h>

int main() {
    int i = 1; // Déclaration et initialisation de la variable i

    // Boucle while pour incrémenter i jusqu'à ce qu'il atteigne 100
    while (i < 101) {
	printf("%d\n", i);

        i++; // Incrémentation de i à chaque itération de la boucle
    }

    return 0;
}
