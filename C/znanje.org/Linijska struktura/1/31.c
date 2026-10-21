#include <stdio.h>

// Napisati program za izracunavanje izraza: 2x, a / 3.

int main() {
    int x;
    float a;
    printf("Unesite broj x: ");
    scanf("%d", &x);
    printf("2x = %d\n", 2 * x);
    printf("Unesite broj a: ");
    scanf("%f", &a);
    printf("a / 3 = %.2f\n", a / 3.0);
    return 0;
}