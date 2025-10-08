#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    int number1 = 1, number2 = 1;
    int abNumber = number1++;
    int abNumber2 = ++number2;

    printf("Number 1: %d Number 2: %d", abNumber, abNumber2);


    return 0;
}