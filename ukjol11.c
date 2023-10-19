#include <stdio.h>

int main() {
    int trojcifernecislo;

    // Získáme trojciferné èíslo od uivatele
    printf("Zadejte trojciferné èíslo: ");
    scanf("%d", &trojcifernecislo);

    // Získáme první èíslici
    int prvniCislice = trojcifernecislo / 100;

    // Získáme poslední èíslici
    int posledniCislice = trojcifernecislo % 10;

    // Vypíšeme první a poslední èíslici
    printf("První èíslice: %d\n", prvniCislice);
    printf("Poslední èíslice: %d\n", posledniCislice);

    return 0;
}
