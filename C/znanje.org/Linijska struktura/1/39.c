#include <stdio.h>

// Za poznate vrijednosti stranice i visine trougla izracunati odgovarajucu povrsinu (P = (a * h) / 2)

int main() {
    float a, h;
    printf("Unesite stranicu a: ");
    scanf("%f", &a);
    printf("Unesite visinu h: ");
    scanf("%f", &h);
    float povrsina = (a * h) / 2.0;
    printf("Povrsina trougla: %.2f\n", povrsina);
    return 0;
}