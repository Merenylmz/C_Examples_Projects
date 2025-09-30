#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int number = 0;

    printf("Please Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
        
    }
    

    return 0;
}