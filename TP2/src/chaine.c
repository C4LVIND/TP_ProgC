#include <stdio.h>

int main() {
    char chaine1[] = "Bonjour";
    char chaine2[] = " tout le monde";
    char copie[100];
    char concat[100];

    int i = 0;
    int longueur = 0;

    // 1. Calculer la longueur de chaine1
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    // 2. Copier chaine1 dans copie
    i = 0;

    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }

    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    // 3. Concaténer chaine1 et chaine2 dans concat
    i = 0;

    // Copier chaine1 dans concat
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    // Ajouter chaine2 à la suite
    int j = 0;

    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}