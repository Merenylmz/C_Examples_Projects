#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[]) {

    int number = 0;
    double result;
    printf("Enter Number: ");
    scanf("%d", &number);
    result = sqrt(number);

    printf("\n Result: %f", result);
    return 0;
}