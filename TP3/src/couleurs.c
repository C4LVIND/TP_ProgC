#include <stdio.h>

int main() {
    char *phrases[10] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[100];
    int trouve = 0;

    printf("Entrez la phrase que vous souhaitez chercher : ");
    fgets(recherche, sizeof(recherche), stdin);

    // Supprimer le '\n' ajouté par fgets
    int longueur = 0;

    while (recherche[longueur] != '\0') {
        if (recherche[longueur] == '\n') {
            recherche[longueur] = '\0';
            break;
        }
        longueur++;
    }

    // Parcourir les 10 phrases
    for (int i = 0; i < 10; i++) {
        int j = 0;

        // Comparer caractère par caractère
        while (phrases[i][j] == recherche[j] &&
               phrases[i][j] != '\0' &&
               recherche[j] != '\0') {
            j++;
        }

        // Si les deux chaînes se terminent au même endroit
        if (phrases[i][j] == '\0' && recherche[j] == '\0') {
            trouve = 1;
            break;
        }
    }

    if (trouve == 1) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}