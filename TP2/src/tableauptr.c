#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tabInt[10];
    float tabFloat[10];

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    // Remplissage des tableaux
    for (int i = 0; i < 10; i++) {
        *(pInt + i) = rand() % 100;
        *(pFloat + i) = (float)(rand() % 100) / 10.0;
    }

    // Affichage avant modification
    printf("Tableau d'entiers avant :\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de float avant :\n");

    for (int i = 0; i < 10; i++) {
        printf("%.1f ", *(pFloat + i));
    }

    // Multiplier par 3 les indices divisibles par 2
    for (int i = 0; i < 10; i += 2) {
        *(pInt + i) = *(pInt + i) * 3;
        *(pFloat + i) = *(pFloat + i) * 3;
    }

    // Affichage après modification
    printf("\n\nTableau d'entiers après :\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de float après :\n");

    for (int i = 0; i < 10; i++) {
        printf("%.1f ", *(pFloat + i));
    }

    printf("\n");

    return 0;
}
