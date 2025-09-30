#include <stdio.h>
#include <unistd.h>


int main(){
    int sayi, cevap;
    int fct = 1;
    printf("Faktoriyeli Alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    
    for (int i = 1; i <= sayi; i++)
    {
        fct = fct*i;
    }
    printf("Sonuc: %d", fct);
    return 0;
}