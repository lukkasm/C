#include <stdio.h>

int jePrestupny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        return 1; // P�estupn� rok
    } else {
        return 0; // Nen� p�estupn� rok
    }
}

int main() {
    int rok;

    printf("Zadejte rok: ");
    scanf("%d", &rok);

    if (jePrestupny(rok)) {
        printf("%d je p�estupn� rok.\n", rok);
    } else {
        printf("%d nen� p�estupn� rok.\n", rok);
    }

    return 0;
}
