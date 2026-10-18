#include <stdio.h>

// Napisati program za ispis sume dva broja.

int main() {
    int a, b;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("%d + %d = %d"\n, a, b, a + b);
    return 0;
}