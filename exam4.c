#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int number = 11;
    printf("ucgenin tabanini giriniz: \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        for (int a = 0; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}