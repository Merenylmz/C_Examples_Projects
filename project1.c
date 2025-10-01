#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int task = 0, result = 0;
    printf("Enter Number: ");
    scanf("%d", &task);
    switch (task)
    {
    case 1: 
        return printf("Deneme1:");
    
    case 2: 
        return printf("Deneme2");

    default:
        return printf("Default");
    }

    return 0;
}