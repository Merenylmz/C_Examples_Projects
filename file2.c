#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, char *argv[]) {
    FILE *file;
    char character;
    file = fopen("C:\\Users\\M.Eren YILMAZ\\Desktop\\deneme.txt", "r");
    do
    {
        character = getc(file);
        printf("%c", character);
    } while (character != EOF);
    
    return 0;
}