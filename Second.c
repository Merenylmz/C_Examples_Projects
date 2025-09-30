#include <stdio.h>
#include <unistd.h>


int main(){

    float kisaKenar, uzunKenar;

    printf("Lütfen Kisa Kenari giriniz: ");
    scanf("%f", &kisaKenar);
    printf("\nLütfen Uzun Kenari giriniz: ");
    scanf("%f", &uzunKenar);

    printf("\nAlan: %f, Çevre: %f", uzunKenar*kisaKenar, (uzunKenar+kisaKenar)*2);
    
}