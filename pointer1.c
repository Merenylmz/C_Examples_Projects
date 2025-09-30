#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int number = 10;
    double number2 = 12.25;
    char text = 'a';
    int deneme = 30;

    int *memoryAddress = &deneme;
    


    printf("Bellek Adresleri: ");
    printf("\n %x", &number);
    printf("\n %x", &number2);
    printf("\n %x", &text);
    printf("\n %x", memoryAddress);

    return 0;
}