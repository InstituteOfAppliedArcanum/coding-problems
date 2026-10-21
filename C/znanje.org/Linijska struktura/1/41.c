#include <stdio.h>

// Za poznate vrijednosti povrsine i stranice trougla izracunati odgovarajucu visinu (P = (ah) / 2)

/*
    p = ah / 2 // *2
    2p = ah // :a
    h = 2p / a
*/

int main() {
    float a, p;
    printf("Unesite stranicu trougla: ");
    scanf("%f", &a);
    printf("Unesite povrsinu trougla: ");
    scanf("%f", &p);
    float h = (2.0 * p) / a;
    printf("Visina trougla: %.2f\n", h);
    return 0;
}