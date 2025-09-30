#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// #include <string.h>

int main(int argc, char *argv[]) {

    char str[100];
    printf("Please Give str: ");
    scanf("%s", &str);

    printf("\n Length: %18.d", strlen(str));

    return 0;
}