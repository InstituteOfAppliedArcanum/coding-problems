#include <stdio.h>
#include <math.h>

// Izracunati korijen sume kvadrata tri ucitana broja.

int main() {
    int a, b, c;
    printf("Unesite broj a: ");
    scanf("%d", &a);
    printf("Unesite broj b: ");
    scanf("%d", &b);
    printf("Unesite broj c: ");
    scanf("%d", &c);
    int suma = a * a + b * b + c * c;
    printf("Korijen sume kvadrata %d: %.2f\n", suma, sqrt(suma));
    return 0;
}