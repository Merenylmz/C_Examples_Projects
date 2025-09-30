#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int main() {
    int yas;
    printf("Yasinizi giriniz: ");    
    scanf("%d", &yas);
    printf("\n Hesaplaniyor...");  
    sleep(5);
    printf("\n Cok Az Kaldi...");  
    sleep(3);
    printf("\nHesaplandi, Yasiniz: %d", yas);
    return 0;
}
