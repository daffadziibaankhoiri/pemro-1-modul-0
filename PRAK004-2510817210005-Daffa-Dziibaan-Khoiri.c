#include <stdio.h>
#include <string.h>

int main(){

    char nama[] = "Daffa Dziiba'an Khoiri";
    char nim[]  = "2510817210005";  

    int penentu_panjang = strlen(nama) > strlen(nim);
    int panjang_batas = (penentu_panjang ? strlen(nama) : strlen(nim)) + 14;
    int inner = panjang_batas - 2;


    int left_nama  = (inner - (int)strlen(nama)) / 2;
    int right_nama = inner - (int)strlen(nama) - left_nama;

    int left_nim   = (inner - (int)strlen(nim)) / 2;
    int right_nim  = inner - (int)strlen(nim) - left_nim;


    for(int i = 0; i < panjang_batas; i++) printf("#");
    printf("\n");

    printf("#%*s%*s#\n", inner, "", 0, "");
    printf("#%*s%s%*s#\n", left_nama, "", nama, right_nama, "");
    printf("#%*s%s%*s#\n", left_nim, "", nim, right_nim, "");
    printf("#%*s%*s#\n", inner, "", 0, "");
    for(int i = 0; i < panjang_batas; i++) printf("#");
    printf("\n");

  

    return 0;
}