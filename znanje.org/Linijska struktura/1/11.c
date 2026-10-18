#include <stdio.h>

// Ucitati 3 broja. Naci sumu prvog i treceg te razliku treceg i prvog. 

int main() {
    int a, b, c;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    printf("Unesite treci broj: ");
    scanf("%d", &c);
    printf("Suma prvog i treceg: %d\n", a + b);
    printf("Razlika treceg i prvog: %d\n", c - a);
    return 0;
}