#include <stdio.h>

int main() {
    char velkePismeno;

    // Z�sk�me velk� p�smeno od u�ivatele
    printf("Zadejte velk� p�smeno: ");
    scanf(" %c", &velkePismeno);

    // P�evedeme velk� p�smeno na mal� pomoc� ASCII tabulky
    char malePismeno = velkePismeno + ('a' - 'A');

    // Vyp�eme mal� p�smeno
    printf("Mal� p�smeno: %c\n", malePismeno);

    return 0;
}
