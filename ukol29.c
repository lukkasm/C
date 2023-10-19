#include <stdio.h>

int main() {
    // Definice a inicializace prvního pole
    int pole1[] = {1, 2, 3, 4, 5};

    // Definice a inicializace druhého pole se stejným poètem prvkù
    int pole2[] = {5, 4, 3, 2, 1};  // Stejné hodnoty, jiný poøadí

    // Zjistìní délky pole (poètu prvkù)
    int delkaPole = sizeof(pole1) / sizeof(pole1[0]);

    // Promìnná pro urèení, zda pole obsahují stejné hodnoty
    int jsouStejne = 1;  // Pøedpokládáme, že jsou stejné, dokud nenajdeme rozdíl

    // Porovnání hodnot prvkù obou polí
    for (int i = 0; i < delkaPole; i++) {
        int hodnota = pole1[i];

        // Kontrola, zda se hodnota nachází v druhém poli
        int nalezeno = 0;
        for (int j = 0; j < delkaPole; j++) {
            if (pole2[j] == hodnota) {
                nalezeno = 1;
                break;
            }
        }

        // Pokud hodnota není nalezena v druhém poli, nastavíme jsouStejne na 0 a ukonèíme smyèku
        if (!nalezeno) {
            jsouStejne = 0;
            break;
        }
    }

    // Výsledek porovnání
    if (jsouStejne) {
        printf("Pole obsahuji stejne hodnoty.\n");
    } else {
        printf("Pole neobsahuji stejne hodnoty.\n");
    }

    return 0;
}
