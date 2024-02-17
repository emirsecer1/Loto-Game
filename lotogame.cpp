#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    int tahminler[6];  
    

    for (int j = 0; j < 6; ++j) {
        printf("%d numarali sayi tahmininizi giriniz: ", j);
        scanf("%d", &tahminler[j]);
    }

    srand(static_cast<unsigned int>(time(0)));
    int dogruTahminSayisi = 0;

    for (int i = 0; i < 6; ++i) {
        int randomSayi = rand() % 101;
        printf("Uretilen random sayi: %d\n", randomSayi);

        for (int j = 0; j < 6; ++j) {
            if (tahminler[j] == randomSayi) {
                printf("Tebrikler! Tahmininiz dogru\n");
                dogruTahminSayisi++;
            }
        }
    }

    printf("Toplamda %d adet dogru tahminde bulundunuz.\n", dogruTahminSayisi);

    return 0;
}
