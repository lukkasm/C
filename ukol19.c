#include <stdio.h>

int jePrestupny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        return 1; // Pøestupný rok
    } else {
        return 0; // Není pøestupný rok
    }
}

int main() {
    int rok;

    printf("Zadejte rok: ");
    scanf("%d", &rok);

    if (jePrestupny(rok)) {
        printf("%d je pøestupný rok.\n", rok);
    } else {
        printf("%d není pøestupný rok.\n", rok);
    }

    return 0;
}
