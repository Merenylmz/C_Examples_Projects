#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int matris1 [2][2] = {10,20,30,40};
    int matris2 [2][2] = {45,21,20,80};
    int sumMatris [2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            sumMatris[i][a] = matris1[i][a] + matris2[i][a];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            printf("%d ", sumMatris[i][a]);
        }
        printf("\n");
    }
    
    
    return 0;
}