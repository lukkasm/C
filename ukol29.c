#include <stdio.h>

int main() {
    // Definice a inicializace prvn�ho pole
    int pole1[] = {1, 2, 3, 4, 5};

    // Definice a inicializace druh�ho pole se stejn�m po�tem prvk�
    int pole2[] = {5, 4, 3, 2, 1};  // Stejn� hodnoty, jin� po�ad�

    // Zjist�n� d�lky pole (po�tu prvk�)
    int delkaPole = sizeof(pole1) / sizeof(pole1[0]);

    // Prom�nn� pro ur�en�, zda pole obsahuj� stejn� hodnoty
    int jsouStejne = 1;  // P�edpokl�d�me, �e jsou stejn�, dokud nenajdeme rozd�l

    // Porovn�n� hodnot prvk� obou pol�
    for (int i = 0; i < delkaPole; i++) {
        int hodnota = pole1[i];

        // Kontrola, zda se hodnota nach�z� v druh�m poli
        int nalezeno = 0;
        for (int j = 0; j < delkaPole; j++) {
            if (pole2[j] == hodnota) {
                nalezeno = 1;
                break;
            }
        }

        // Pokud hodnota nen� nalezena v druh�m poli, nastav�me jsouStejne na 0 a ukon��me smy�ku
        if (!nalezeno) {
            jsouStejne = 0;
            break;
        }
    }

    // V�sledek porovn�n�
    if (jsouStejne) {
        printf("Pole obsahuji stejne hodnoty.\n");
    } else {
        printf("Pole neobsahuji stejne hodnoty.\n");
    }

    return 0;
}
