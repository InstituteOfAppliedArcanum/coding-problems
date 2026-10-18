#include <stdio.h>
#include <math.h>

// Izracunati kvadratni korijen ucitanog broja i ispisati kao novu varijablu.

int main() {
    float n;
    printf("Unesite broj: ");
    scanf("%f", &n);
    float korijen = sqrt(n);
    printf("Kvadratni korijen %.2f = %.2f\n", n, korijen);
    return 0;
}