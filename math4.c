#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[]) {

    double number1;
    printf("Please Give Number: ");
    scanf("%lf", &number1);

    printf("\n fabs %lf", fabs(number1));
    printf("\n log %lf", log10(number1));
    return 0;
}