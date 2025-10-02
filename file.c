#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, char *argv[]) {
    FILE *file;
    file = fopen("C:\\Users\\M.Eren YILMAZ\\Desktop\\deneme.txt", "w");
    fprintf(file, "Daaaaaaaa");
    return 0;
}