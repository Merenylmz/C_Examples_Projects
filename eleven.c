#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int matris[2][3] = {10,20,30,40,50,60};
    int number = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            printf("%d ", matris[i][a]);
        }
        printf("\n");
    }
    
    return 0;
}