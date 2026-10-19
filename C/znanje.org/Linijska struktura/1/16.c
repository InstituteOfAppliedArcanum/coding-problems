#include <stdio.h>

// Izracunati sumu kubova dva ucitana broja.

int main() {
    int a, b;
    printf("Unesite broj a: ");
    scanf("%d", &a);
    printf("Unesite broj b: ");
    scanf("%d", &b);
    printf("Suma kubova: %d\n", a * a * a + b * b * b);
    return 0;
}