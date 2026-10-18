#include <stdio.h>

// Napisati program za ucitavanje dva broja i ispisati ih u obrnutom redoslijedu ucitavanja.

int main() {
    int a, b;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("Obrnuti redoslijed brojeva: %d, %d\n", b, a);
    return 0;
}