#include <stdio.h>

int main() {
    double realneCislo;

    // Z�sk�me re�ln� ��slo od u�ivatele
    printf("Zadejte re�ln� ��slo: ");
    scanf("%lf", &realneCislo);

    // Z�sk�me celou ��st re�ln�ho ��sla
    int celaCast = (int)realneCislo;

    // Vyp�eme celou ��st re�ln�ho ��sla
    printf("Cel� ��st: %d\n", celaCast);

    return 0;
}
