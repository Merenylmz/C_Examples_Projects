#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int number = 0, sum = 0;
    printf("Please Enter Number: ");
    scanf("%d", &number);

    int unitDigit = number % 10;
    int tensDigit = (number / 10) % 10;
    int hundredDigit = (number / 100) % 10;

    sum = unitDigit+tensDigit+hundredDigit;

    printf("%d", sum);
    return 0;
}