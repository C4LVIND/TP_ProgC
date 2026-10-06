#include <stdio.h>

int main() {
    char noms[5][20] = {
        "Dupont",
        "Martin",
        "Bernard",
        "Durand",
        "Morel"
    };

    char prenoms[5][20] = {
        "Jean",
        "Thomas",
        "Claire",
        "Hugo",
        "Sophie"
    };

    char adresses[5][50] = {
        "10 rue de Paris",
        "25 rue Victor Hugo",
        "8 avenue de la Republique",
        "15 rue de Lyon",
        "3 boulevard Voltaire"
    };

    float notesC[5] = {
        15.5,
        12.0,
        17.5,
        14.0,
        16.0
    };

    float notesSysteme[5] = {
        14.0,
        13.5,
        16.0,
        11.5,
        15.0
    };

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", notesC[i]);
        printf("Note Systeme d'exploitation : %.2f\n", notesSysteme[i]);
        printf("-----------------------------\n");
    }

    return 0;
}