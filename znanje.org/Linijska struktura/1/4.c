#include <stdio.h>

// Napisati program za ucitavanje i ispis tri broja.

int main() {
    int a, b, c;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("Unesite treci broj: ");
    scanf("%d", &c);
    printf("Ispis tri broja: %d, %d, %d\n", a, b, c);
    return 0;
}