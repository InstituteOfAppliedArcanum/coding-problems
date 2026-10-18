#include <stdio.h>

// Napisati program za izracunavanje aritmeticke sredine tri broja.

int main() {
    float a, b, c;
    printf("Unesite prvi broj: ");
    scanf("%f", &a);
    printf("Unesite drugi broj: ");
    scanf("%f", &b);
    printf("Unesite treci broj: ");
    scanf("%f", &c);
    printf("Aritmeticka sredina: %.2f\n", (a + b + c) / 3);
    return 0;
}