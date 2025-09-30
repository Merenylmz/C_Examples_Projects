#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double number1;
    printf("Please Give Number: ");
    scanf("%lf", &number1);
    
    printf("\nFloor: %f", floor(number1));
    printf("\n Ceil: %f", ceil(number1));
    
    return 0;
}