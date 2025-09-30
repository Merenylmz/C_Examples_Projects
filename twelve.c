#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int row, col;

    printf("Please enter Col number: ");
    scanf("%d", &col);
    printf("\nPlease enter Row number: ");
    scanf("%d", &row);

    int matris [row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Your Value-----> [%d][%d] ", i, j);
            scanf("%d", &matris[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}