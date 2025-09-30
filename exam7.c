#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int handRight = 8, normalRight = 15, userHand = 0, userNormal = 0, sum = 0;

    printf("Please enter Hand Weight: ");
    scanf("%d", &userHand);
    printf("\nPlease enter Normal Weight: ");
    scanf("%d", &userNormal);
    
    sum += 13;
    if (userHand > handRight)
    {
        for (int i = handRight+1; i <= userHand; i++)
        {
            sum += 4;
        }
    }
    
    if (userNormal > normalRight)
    {
        for (int a = normalRight+1; a <= userNormal; a++)
        {
            sum += 5;
        }
    }
    

    printf("\n Sum: %d", sum);

    return 0;
}