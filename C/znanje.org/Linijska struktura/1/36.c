#include <stdio.h>

// Napisati program za izracunavanje obima trougla.

int main() {
    int a, b, c;
    printf("Unesite stranicu a: ");
    scanf("%d", &a);
    printf("Unesite stranicu b: ");
    scanf("%d", &b);
    printf("Unesite stranicu c: ");
    scanf("%d", &c);
    int obim = a + b + c;
    printf("Obim trougla: %d\n", obim);
    return 0;
}