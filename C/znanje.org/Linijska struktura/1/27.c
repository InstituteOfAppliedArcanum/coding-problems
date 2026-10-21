#include <stdio.h>
#include <math.h>

// Izracunati dijagonalu kvadrata.

int main() {
    float a;
    printf("Unesite stranicu a: ");
    scanf("%f", &a);
    float d = sqrt(2) * a;
    printf("Dijagonala: %.2f\n", d);
    return 0;
}