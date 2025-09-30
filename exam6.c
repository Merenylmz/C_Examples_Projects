#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int number1 = 0, number2 = 0, sum = 0;
    printf("1. Sayiyi giriniz: ");
    scanf("%d", &number1);
    printf("\n2. Sayiyi giriniz: ");
    scanf("%d", &number2);

    if (number1 == number2)
    {
        printf("\nLütfen Farklı Sayılar giriniz");
        abort();
        return 0;
    }

    for (int i = number1; i <= number2; i++)
    {
        sum += i;
    }

    printf("\n%d", sum);

    return 0;
}