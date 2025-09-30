#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

enum cities {
    deneme1, deneme2, deneme3,deneme4
};


int main(int argc, char *argv[]) {

    enum cities il;
    il=deneme2;

    printf("%d", il);
    return 0;
}