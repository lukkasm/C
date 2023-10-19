#include <stdio.h>

int main() {
    int n;

    // Naètení hodnoty n od uživatele
    printf("Zadejte hodnotu n: ");
    scanf("%d", &n);

    // Vykreslení trojúhelníku
    for (int i = 1; i <= n; i++) {
        // Vykreslení mezery pøed hvìzdami
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Vykreslení hvìzd pro aktuální øádek
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
            if (k < 2 * i - 1) {
                printf(" ");
            }
        }

        // Nový øádek po dokonèení øádku
        printf("\n");
    }

    return 0;
}
