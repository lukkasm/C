#include <stdio.h>

int main(){
    int a, obsah, obvod;
    printf("Zadejte délku strany čtverce: ");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Strana čtverce musí být kladné celé číslo.\n");
        return 1;  
    }
    obsah = a * a;
    obvod = 4 * a;
    printf("Obsah ctverce je %d a obvod %d.\n", obsah, obvod);
    return 0;
}