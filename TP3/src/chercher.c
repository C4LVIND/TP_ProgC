#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int recherche;
    int present = 0;

    srand(time(NULL));

    // Remplissage du tableau
    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 201 - 100;
    }

    // Affichage du tableau
    printf("Tableau :\n");

    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    // Demander le nombre à rechercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche dans le tableau
    for (int i = 0; i < 100; i++) {
        if (tableau[i] == recherche) {
            present = 1;
            break;
        }
    }

    // Affichage du résultat
    if (present == 1) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}