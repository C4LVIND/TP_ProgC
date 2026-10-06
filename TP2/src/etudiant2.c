#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float noteC;
    float noteSysteme;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].noteC = 16.5;
    etudiants[0].noteSysteme = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].noteC = 14.0;
    etudiants[1].noteSysteme = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "15 Rue Victor Hugo, Paris");
    etudiants[2].noteC = 17.0;
    etudiants[2].noteSysteme = 15.5;

    strcpy(etudiants[3].nom, "Durand");
    strcpy(etudiants[3].prenom, "Thomas");
    strcpy(etudiants[3].adresse, "8 Avenue de la Republique, Paris");
    etudiants[3].noteC = 13.5;
    etudiants[3].noteSysteme = 14.0;

    strcpy(etudiants[4].nom, "Morel");
    strcpy(etudiants[4].prenom, "Sophie");
    strcpy(etudiants[4].adresse, "10 Rue de Lyon, Paris");
    etudiants[4].noteC = 15.5;
    etudiants[4].noteSysteme = 16.0;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.1f\n", etudiants[i].noteC);
        printf("Note Systeme d'exploitation : %.1f\n", etudiants[i].noteSysteme);
        printf("-----------------------------\n");
    }

    return 0;
}