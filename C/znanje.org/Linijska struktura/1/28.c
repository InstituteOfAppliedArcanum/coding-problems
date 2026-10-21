#include <stdio.h>

// Napisati program za izracunavanje povrsine pravougaonika.

int main() {
    int a, b;
    printf("Unesite stranicu a: ");
    scanf("%d", &a);
    printf("Unesite stranicu b: ");
    scanf("%d", &b);
    int povrsina = a * b;
    printf("Povrsina pravougaonika: %d\n", povrsina);
    return 0;
}