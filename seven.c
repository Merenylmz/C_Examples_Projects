#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    for (int i = 1; i <= 50; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}