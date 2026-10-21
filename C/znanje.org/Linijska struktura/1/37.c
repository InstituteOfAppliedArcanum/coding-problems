#include <stdio.h>
#include <math.h>

// Napisati program za izracunavanje povrsine trougla na dva nacina:
// Horisteci Heronovu formulu: S = (a + b + c) / 2, P = (S * (S - a) * (S - b) * (S - c))^1/2
// P = (a * h) /2 

int main() {
    float a, b, c;
    printf("Unesite stranicu a: ");
    scanf("%f", &a);
    printf("Unesite stranicu b: ");
    scanf("%f", &b);
    printf("Unesite stranicu c: ");
    scanf("%f", &c);
    float S = (a + b + c) / 2.0;
    float P1 = powf(S * (S - a) * (S - b) * (S - c), 1.0 / 2.0);
    printf("Povrsina preko Heronove formule: %.2f\n", P1);
    float h;
    printf("Unesite visinu h: ");
    scanf("%f", &h);
    float P2 = (a * h) / 2;
    printf("Povrsina preko formule za visinu: %.2f\n", P2);
    return 0;
}