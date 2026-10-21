#include <stdio.h>
#include <math.h>

// napisati program za izracunavanje dijagonalu pravougaonika.

int main() {
    float a, b;
    printf("Unesite stranicu a: ");
    scanf("%f", &a);
    printf("Unesite stranicu b: ");
    scanf("%f", &b);
    float dijagonala = sqrt(a * a + b * b);
    printf("Dijagonala pravougaonika: %.2f\n", dijagonala);
    return 0;
}