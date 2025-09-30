#include <stdio.h>
#include <unistd.h>


int main() {
    int sayi;
    printf("Hava Yağmurlu ise 1 e degilse 0 yazın");
    scanf("%d", &sayi);
    if (sayi == 1)
    {
        return printf("\n Hava Yagmurlu semsiye al");
    } else {
        return printf("\n Hava Normal bir sey almana gerek yok");
    }
    

    return 0;
}