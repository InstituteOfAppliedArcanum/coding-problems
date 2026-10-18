#include <stdio.h>

// Ucitati tri broja. Naci razliku treceg i drugog, te proizvod prvog i drugog.

int main() {
    int a, b, c;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("Unesite treci broj: ");
    scanf("%d", &c);
    printf("Razlika treceg i drugog: %d\n", c - b);
    printf("Proizvod prvog i drugog: %d\n", a * b);
    return 0;
}