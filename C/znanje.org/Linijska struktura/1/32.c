#include <stdio.h>

// za ucitani poluprecnik izracunati obim kruga. 

const float PI = 3.14;

int main() {
    float r;
    printf("Unesite poluprecnik: ");
    scanf("%f", &r);
    float obim = 2.0 * r * PI;
    printf("Obim kruga: %.2f\n", obim);
    return 0;
}