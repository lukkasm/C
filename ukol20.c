#include <stdio.h>

int main() {
int znak;
printf("Zadej znak: \n");

scanf("%c", &znak);

int ascii = (int)znak;

if(ascii >= 65 && ascii <= 90){
    printf("Velke pismeno");
}
else if(ascii >= 97 && ascii <= 122) {
    printf("Male pismeno");
}

return 0;
}
