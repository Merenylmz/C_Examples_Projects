#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int number1 = 1, number2 = 3;

    printf("%d\n", number1);
    number1++;
    printf("%d\n", number1);

    printf("%d\n", number2);
    ++number2;
    printf("%d\n", number2);

    return 0;
}