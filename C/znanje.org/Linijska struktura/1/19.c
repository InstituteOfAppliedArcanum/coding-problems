#include <stdio.h>
#include <math.h>

// Ucitati cetiri broja. Izracunati korijen aritmeticke sredine njihovih absolutnih vrijednosti.

int main() {
    float a, b, c, d;
    printf("Unesite broj a: ");
    scanf("%f", &a);
    printf("Unesite broj b: ");
    scanf("%f", &b);
    printf("Unesite broj c: ");
    scanf("%f", &c);
    printf("Unesite broj d: ");
    scanf("%f", &d);

    a = fabs(a);
    b = fabs(b);
    c = fabs(c);
    d = fabs(d);
    float aritmeticka = (a + b + c + d) / 4;
    printf("Korijen aritmeticke sredine %.2f: %.2f\n", aritmeticka, sqrtf(aritmeticka));
    return 0;
}