#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    FILE *txt;
    
    char data1[20] = "Deneme1";
    char data2[20] = "Deneme2";
    char data3[20] = "Deneme3";

    txt = fopen("C:\\Users\\M.Eren YILMAZ\\Desktop\\deneme.txt", "w");

    fputs(data1, txt);
    fputs(data2, txt);
    fputs(data3, txt);
    return 0;
}