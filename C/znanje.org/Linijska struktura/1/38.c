#include <stdio.h>
#include <math.h>

// Ucitati stranice trougla i naci obim i povrsinu

int main() {
    float a, b, c;
    printf("Unesite stranicu a: ");
    scanf("%f", &a);
    printf("Unesite stranicu b: ");
    scanf("%f", &b);    
    printf("Unesite stranicu c: ");
    scanf("%f", &c);

    float obim = a + b + c;
    float S = (a + b + c) / 2.0;
    float povrsina = sqrtf(S * (S - a) * (S - b) * (S - c));
    printf("Obim: %.2f\nPovrsina: %.2f\n", obim, povrsina);
    return 0;
}