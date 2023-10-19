#include <stdio.h>

int main() {
    double realneCislo;

    // Získáme reálné èíslo od uivatele
    printf("Zadejte reálné èíslo: ");
    scanf("%lf", &realneCislo);

    // Získáme celou èást reálného èísla
    int celaCast = (int)realneCislo;

    // Vypíšeme celou èást reálného èísla
    printf("Celá èást: %d\n", celaCast);

    return 0;
}
