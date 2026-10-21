#include <stdio.h>

// Za ucitani poluprecnik izracunati povrsinu kruga.

const float PI = 3.14;

int main() {
    float r;
    printf("Unesite poluprecnik: ");
    scanf("%f", &r);
    float povrsina = r * r * PI;
    printf("Povrsina kruga: %.2f\n", povrsina);
    return 0;
}