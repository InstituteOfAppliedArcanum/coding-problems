#include <stdio.h>
#include <math.h>

// Izracunati korijen absolutne vrijednosti sume kvadrata dva ucitana broja.

int main() {
    int a, b;
    printf("Unesite broj a: ");
    scanf("%d", &a);
    printf("Unesite broj b: ");
    scanf("%d", &b);
    int suma = a * a + b * b;
    suma = abs(suma);
    printf("Korijen absolutne vrijednosti sume kvadrata %d: %.2f\n", suma, sqrt(suma));
    return 0;
}