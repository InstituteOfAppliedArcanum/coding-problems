#include <stdio.h>

// Napisati program za izracunavanje obima pravougaonika.

int main() {
    int a, b;
    printf("Unesite stranicu a: ");
    scanf("%d", &a);
    printf("Unesite stranicu b: ");
    scanf("%d", &b);
    int obim = 2 * a + 2 * b;
    printf("Obim pravougaonika: %d\n", obim);
    return 0; 
}