#include <stdio.h>

int main() {
    int trojcifernecislo;

    // Z�sk�me trojcifern� ��slo od u�ivatele
    printf("Zadejte trojcifern� ��slo: ");
    scanf("%d", &trojcifernecislo);

    // Z�sk�me prvn� ��slici
    int prvniCislice = trojcifernecislo / 100;

    // Z�sk�me posledn� ��slici
    int posledniCislice = trojcifernecislo % 10;

    // Vyp�eme prvn� a posledn� ��slici
    printf("Prvn� ��slice: %d\n", prvniCislice);
    printf("Posledn� ��slice: %d\n", posledniCislice);

    return 0;
}
