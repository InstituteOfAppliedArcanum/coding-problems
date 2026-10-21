#include <stdio.h>

// Za poznati poluprecnik izracunati obim i povrsinu kruga.

const float PI = 3.14;

int main() {
    float r;
    printf("Unesite poluprecnik: ");
    scanf("%f", &r);
    float obim = 2.0 * r * PI;
    float povrsina = r * r * PI;
    printf("Obim kruga: %.2f\nPovrsina kruga: %.2f\n", obim, povrsina);
    return 0; 
}