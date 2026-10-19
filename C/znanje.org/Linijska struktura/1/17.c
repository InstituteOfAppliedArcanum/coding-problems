#include <stdio.h>

// Izracunati sumu kubova tri ucitana broja.

int main() {
    int a, b, c;
    printf("Unesite broj a: ");
    scanf("%d", &a);
    printf("Unesite broj b: ");
    scanf("%d", &b);
    printf("Unesite broj c: ");
    scanf("%d", &c);
    printf("Suma kubova brojeva %d, %d, i %d: %d\n", a, b, c, a * a * a + b * b * b + c * c * c);
    return 0;
}