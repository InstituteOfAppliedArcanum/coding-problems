#include <stdio.h>

// Za poznat obim kruga izracunati poluprecnik i povrsinu kruga

const float PI = 3.14;

int main() {
    float o;
    printf("Unesite obim kruga: ");
    scanf("%f", &o);
    float poluprecnik = o / (2.0 * PI);
    float povrsina = poluprecnik * poluprecnik * PI;
    printf("Poluprecnik: %.2f\nPovrsina: %.2f\n", poluprecnik, povrsina);
    return 0;
}