#include <stdio.h>

int main() {
    char velkePismeno;

    // Získáme velké písmeno od uživatele
    printf("Zadejte velké písmeno: ");
    scanf(" %c", &velkePismeno);

    // Pøevedeme velké písmeno na malé pomocí ASCII tabulky
    char malePismeno = velkePismeno + ('a' - 'A');

    // Vypíšeme malé písmeno
    printf("Malé písmeno: %c\n", malePismeno);

    return 0;
}
