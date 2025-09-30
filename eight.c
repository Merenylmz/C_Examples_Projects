#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int i = 0;
    while (i<=20)
    {
        if (i % 2 == 0 && i != 14)
        {
            printf("%d\n", i);
        }
        
        i++;
    }
    
    return 0;
}