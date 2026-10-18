#include <stdio.h>

// Izracunati sumu kvadrata dva ucitana broja.

int main() {
    int a, b;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("Suma kvadrata: %d\n", a * a + b * b);
    return 0;
}