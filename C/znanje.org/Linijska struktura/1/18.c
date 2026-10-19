#include <stdio.h>
#include <math.h>

// Ucitati dva broja. Izracunati korijen aritmeticke sredine njihovih absolutnih vrijednosti.

int main() {
    float a, b;
    printf("Unesite broj a: ");
    scanf("%f", &a);
    printf("Unesite broj b: ");
    scanf("%f", &b);
    
    a = fabs(a);
    b = fabs(b);
    float aritmeticka = (a + b) / 2.0;
    printf("Korijen aritmeticke sredine abs vrijednosti %.2f i %.2f: %.2f\n", a, b, sqrtf(aritmeticka));
    return 0;
}
