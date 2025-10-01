#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define getNumber(s1, s2) (s1>s2) ? s1 : s2 

int main(int argc, char *argv[]) {
    printf("%d", getNumber(6,5));

    return 0;
}