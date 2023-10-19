#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("First num: \n");
    scanf("%d", &a);
    printf("Second num: \n");
    scanf("%d", &b);

    for(int i = 1; i <= a; i++){
        printf("%d\n",i * b);
    }
    int mocnina = pow(b, a);
    printf("%d-ta mocnina cisla %d: %d\n", a, b, mocnina);

    int pocetCislic = 0;
    int tempA = a;
    while (tempA != 0) {
        tempA /= 10;
        pocetCislic++;
    }
    printf("Èíslo %d má %d èíslic.\n", a, pocetCislic);

    int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
      int fibonacciCislo = fibonacci(a);
    printf("%d-té Fibonacciho èíslo: %d\n", a, fibonacciCislo);

}

    int suma = 0;
    for (int i = a + 1; i < b; i++) {
        suma += i;
    }
    printf("Souèet èísel vìtších než %d a menších než %d: %d\n", a, b, suma);

    return 0;
}
