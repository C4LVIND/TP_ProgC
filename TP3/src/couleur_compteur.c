#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurCompteur {
    struct Couleur couleur;
    int compteur;
};

int main() {
    struct Couleur couleurs[100];
    struct CouleurCompteur distinctes[100];

    int nbDistinctes = 0;

    srand(time(NULL));

    // Génération des 100 couleurs
    for (int i = 0; i < 100; i++) {
        couleurs[i].r = rand() % 256;
        couleurs[i].g = rand() % 256;
        couleurs[i].b = rand() % 256;
        couleurs[i].a = 255;
    }

    // Recherche des couleurs distinctes
    for (int i = 0; i < 100; i++) {
        int trouve = 0;

        for (int j = 0; j < nbDistinctes; j++) {

            if (couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a) {

                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }

        // Si la couleur n'existe pas encore
        if (trouve == 0) {
            distinctes[nbDistinctes].couleur = couleurs[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    // Affichage des couleurs distinctes
    printf("Couleurs distinctes :\n\n");

    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].compteur);
    }

    printf("\nNombre de couleurs distinctes : %d\n", nbDistinctes);

    return 0;
}