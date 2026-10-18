#include <stdio.h>

// Izracunati aritmeticku sredinu dva broja.

int main() {
    float a, b;
    printf("Unesite prvi broj: ");
    scanf("%f", &a);
    printf("Unesite drugi broj: ");
    scanf("%f", &b);
    printf("Aritmeticka sredina: %.2f\n", (a + b) / 2.0);
    return 0;
}