#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int spring = 10, autumn = 8, summer = 80, winter = 40, sum = 0;
    int fold = 320 / winter;

    sum = (winter+spring+autumn+summer) * fold;
    printf("%d", sum);
    
    return 0;
}