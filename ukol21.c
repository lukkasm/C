#include <stdio.h>

int main() {
    int n;

    // Na�ten� hodnoty n od u�ivatele
    printf("Zadejte hodnotu n: ");
    scanf("%d", &n);

    // Vykreslen� troj�heln�ku
    for (int i = 1; i <= n; i++) {
        // Vykreslen� mezery p�ed hv�zdami
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Vykreslen� hv�zd pro aktu�ln� ��dek
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
            if (k < 2 * i - 1) {
                printf(" ");
            }
        }

        // Nov� ��dek po dokon�en� ��dku
        printf("\n");
    }

    return 0;
}
