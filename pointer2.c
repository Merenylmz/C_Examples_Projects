#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char letter = 'k';
    char *address = &letter;

    printf("%x", address);
    address++;
    printf("\n%x", address);
    address--;
    printf("\n%x", address);
    address += 5;
    printf("\n%x", address);

    return 0;
}