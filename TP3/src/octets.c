#include <stdio.h>

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201L;
    float f = 3.0f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p;

    // Octets de short
    printf("Octets de short :\n");
    p = (unsigned char *)&s;

    for (int j = 0; j < sizeof(s); j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    // Octets de int
    printf("Octets de int :\n");
    p = (unsigned char *)&i;

    for (int j = 0; j < sizeof(i); j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    // Octets de long int
    printf("Octets de long int :\n");
    p = (unsigned char *)&l;

    for (int j = 0; j < sizeof(l); j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    // Octets de float
    printf("Octets de float :\n");
    p = (unsigned char *)&f;

    for (int j = 0; j < sizeof(f); j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    // Octets de double
    printf("Octets de double :\n");
    p = (unsigned char *)&d;

    for (int j = 0; j < sizeof(d); j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    // Octets de long double
    printf("Octets de long double :\n");
    p = (unsigned char *)&ld;

    for (int j = 0; j < sizeof(ld); j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n");

    return 0;
}