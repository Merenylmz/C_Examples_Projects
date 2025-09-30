#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    for (int i = 100; i < 1000; i++)
    {
        if ((i % 10 != (i/10) % 10) && (i % 10 != (i/100)%10) && ((i/100)%10 != (i/10) % 10))
        {
            printf("\n%d", i);
        }
         
    }
    
    return 0;
}