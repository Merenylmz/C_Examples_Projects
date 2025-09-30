#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


struct bookInfo {
    char bookName[30];
    int pageNumber;
};

int main(int argc, char *argv[]) {

    struct bookInfo bi =
    {
        "Deneme 1",
        120
    };

    printf("Book Name: %s", bi.bookName);
    printf("\nBook Name: %d", bi.pageNumber);
    


    return 0;
}