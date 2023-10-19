#include <stdio.h>

int main() {
    // Definice a inicializace prvního pole
    int pole1[] = {1, 2, 3, 4, 5};

    // Definice a inicializace druhého pole se stejným poètem prvkù
    int pole2[] = {1, 2, 3, 4, 5};

    // Zjistìní délky pole (poètu prvkù)
    int delkaPole = sizeof(pole1) / sizeof(pole1[0]);

    // Promìnná pro urèení, zda jsou pole stejná
    int jsouStejna = 1;  // Pøedpokládáme, že jsou stejná, dokud nenajdeme rozdíl

    // Porovnání prvkù obou polí
    for (int i = 0; i < delkaPole; i++) {
        if (pole1[i] != pole2[i]) {
            // Nalezen rozdíl, nastavíme jsouStejna na 0 a ukonèíme smyèku
            jsouStejna = 0;
            break;
        }
    }

    // Výsledek porovnání
    if (jsouStejna) {
        printf("Pole jsou stejna.\n");
    } else {
        printf("Pole nejsou stejna.\n");
    }

    return 0;
}
