#include <stdio.h>
#include <string.h>

int main() {
    char c = 'A';
    short s = 100;
    int i = 1000;
    long int l = 10000;
    long long int ll = 100000;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("AVANT LA MANIPULATION :\n\n");

    printf("Adresse de c : %p, Valeur : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : %04hx\n", (void *)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur : %lx\n", (void *)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur : %llx\n", (void *)pll, (unsigned long long)ll);

    unsigned int valeur_f;
    unsigned long long valeur_d;

    memcpy(&valeur_f, &f, sizeof(f));
    memcpy(&valeur_d, &d, sizeof(d));

    printf("Adresse de f : %p, Valeur : %08x\n", (void *)pf, valeur_f);
    printf("Adresse de d : %p, Valeur : %llx\n", (void *)pd, valeur_d);

    printf("Adresse de ld : %p\n", (void *)pld);

    /*
     * Manipulation des variables avec les pointeurs
     */
    *pc = 'B';
    *ps = 200;
    *pi = 2000;
    *pl = 20000;
    *pll = 200000;
    *pf = 2.0f;
    *pd = 4.0;
    *pld = 6.0L;

    printf("\nAPRES LA MANIPULATION :\n\n");

    printf("Adresse de c : %p, Valeur : %02x\n", (void *)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : %04hx\n", (void *)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : %08x\n", (void *)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur : %lx\n", (void *)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur : %llx\n", (void *)pll, (unsigned long long)ll);

    memcpy(&valeur_f, &f, sizeof(f));
    memcpy(&valeur_d, &d, sizeof(d));

    printf("Adresse de f : %p, Valeur : %08x\n", (void *)pf, valeur_f);
    printf("Adresse de d : %p, Valeur : %llx\n", (void *)pd, valeur_d);

    printf("Adresse de ld : %p\n", (void *)pld);

    return 0;
}