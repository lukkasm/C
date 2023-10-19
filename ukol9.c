#include <stdio.h>

int main(){
    int a = 2, b = 2, c = 1, d = 1, e = 4;
    int result1 = a++ / b-- * d++;
    printf("Result1 is %d\n", result1);
    int result2 = b-- * c++ + e;
    printf("Result2 is %d\n", result2);
    int result3 = -b + --c;
    printf("Result3 is %d\n", result3);
    int result4 = ++a + a--;
    printf("Result4 is %d\n", result4);
    int result5 = c / a * d++ / --c;
    printf("Result5 is %d\n", result5);
    int result6 = a %= b =d =1 + e/2;
    printf("Result6 is %d\n", result6);
    return 0;
}
