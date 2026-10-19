#include <stdio.h>

// Izracunati povrsinu kocke.

int main() {
    int a; 
    printf("Unesite stranicu a: ");
    scanf("%d", &a);
    printf("Povrsina kocke: %d\n", 6 * a * a);
    return 0; 
}