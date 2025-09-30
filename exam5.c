#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int sum = 0;

    for (int i = 1; i < 82; i+=4)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}