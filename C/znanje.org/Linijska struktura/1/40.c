#include <stdio.h>

// Napisati program za izracunavanje stranice trougla ako je poznata povrsina i visina trougla (P = (a * h) / 2)

/*
    P = ah / 2 // * 2
    2p = ah // h
    a = 2p / h
*/

int main() {
    float p, h;
    printf("Unesite povrsinu trougla: ");
    scanf("%f", &p);
    printf("Unesite visinu trougla: ");
    scanf("%f", &h);
    float a = (2.0 * p) / h;
    printf("Stranica a: %.2f\n", a);
    return 0;
}