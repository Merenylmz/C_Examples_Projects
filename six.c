#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int a = 1, b = 1, c, i; 

    // printf("Lutfen sayi giriniz: ");
    // scanf("%d", &number);
    printf("%d\n", a);
    printf("%d\n", b);
    for (i = 1; i <= 8; i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d\n", c);
    }



    return 0;
}