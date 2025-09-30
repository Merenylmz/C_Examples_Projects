#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int deneme [] = {6,5,7,8, 1, 2, 7};
    int sum = 0;
    int n = sizeof(deneme) / sizeof(deneme[0]);
    printf("\n%d", n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + deneme[i];
    }
    printf("\n%d", sum);
    return 0;
}
