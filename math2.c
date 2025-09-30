#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[]) {

    double x,y;

    printf("Tabani giriniz: ");
    scanf("%lf", &x);
    printf("\nUs giriniz: ");
    scanf("%lf", &y);

    printf("Result: %f", pow(x, y));
    return 0;
}