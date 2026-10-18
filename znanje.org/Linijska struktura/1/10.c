#include <stdio.h>

// Izracunati kvadrat ucitanog broja i ispisati ga kao novu varijablu.

int main() {
    int n;
    printf("Unesite prvi broj: ");
    scanf("%d", &n);
    int kvadrat = n * n;
    printf("Kvadrat %d = %d\n", n, kvadrat);
    return 0;
}