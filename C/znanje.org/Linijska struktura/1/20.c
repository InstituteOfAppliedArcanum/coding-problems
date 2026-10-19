#include <stdio.h>
#include <math.h>

// Izracunati korijen sume dva ucitana broja.

int main() {
    int a, b;
    printf("Unesite broj a: ");
    scanf("%d", &a);
    printf("Unesite broj b: ");
    scanf("%d", &b);
    int suma = a + b;
    printf("Korijen sume %d: %.2f\n", suma, sqrt(suma));
    return 0;
}