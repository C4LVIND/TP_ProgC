#include <stdio.h>
#include <string.h>

int main() {
double pi = 3.1416;
double r = 8;  

double air = pi * r * r;
double perimetre = 2 * pi * r; 
    printf("L'air du cercle = %f", pi*(r*r));
   printf("Le périmètre du cercle = %f", pi*(r+r));
}

