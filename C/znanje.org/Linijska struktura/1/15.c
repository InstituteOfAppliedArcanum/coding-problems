#include <stdio.h>

// Izracunati sumu kvadrata tri ucitana broja.

int main() {
    int a, b, c;
    printf("Unesite broj a: ");
    scanf("%d", &a);
    printf("Unesite broj b: ");
    scanf("%d", &b);
    printf("Unesite broj c: ");
    scanf("%d", &c);
    printf("Suma kvadrata %d, %d, i %d: %d\n", a, b, c, a * a + b * b + c * c);
    return 0;
}