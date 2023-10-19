#include <stdio.h>

int main() {
    // Definice a inicializace prvn�ho pole
    int pole1[] = {1, 2, 3, 4, 5};

    // Definice a inicializace druh�ho pole se stejn�m po�tem prvk�
    int pole2[] = {1, 2, 3, 4, 5};

    // Zjist�n� d�lky pole (po�tu prvk�)
    int delkaPole = sizeof(pole1) / sizeof(pole1[0]);

    // Prom�nn� pro ur�en�, zda jsou pole stejn�
    int jsouStejna = 1;  // P�edpokl�d�me, �e jsou stejn�, dokud nenajdeme rozd�l

    // Porovn�n� prvk� obou pol�
    for (int i = 0; i < delkaPole; i++) {
        if (pole1[i] != pole2[i]) {
            // Nalezen rozd�l, nastav�me jsouStejna na 0 a ukon��me smy�ku
            jsouStejna = 0;
            break;
        }
    }

    // V�sledek porovn�n�
    if (jsouStejna) {
        printf("Pole jsou stejna.\n");
    } else {
        printf("Pole nejsou stejna.\n");
    }

    return 0;
}
