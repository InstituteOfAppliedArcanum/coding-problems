#include <stdio.h>

// Napisati program za ucitavanje tri broja i ispisati ih u obrnutom redoslijedu ucitavanja.

int main() {
    int a, b, c;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("Unesite treci broj: ");
    scanf("%d", &c);
    printf("Obrnut redoslijed unijetih brojeva: %d, %d, %d\n", c, b, a);
    return 0;
}