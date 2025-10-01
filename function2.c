#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int sum (int number1, int number2, ...) {
    return number1 + number2;
}

int main(int argc, char *argv[]) {

    printf("%d", sum(1,4));
    return 0;
}