/*
TODO RAPIHIN TUTORIAL
! ERROR OPERATOR TIDAK BISA DIINPUT
TODO BENERIN OUTPUT HASIL
*/

/*
    ! LOGARITMA

    char adsf;
    int num_satu, num_dua, result;
    print judul  dan pembukaan 
    print pilihan 
    

    proses:
    switch(asdf) {
        case '+' {
            hasil = nomer_satu + nomer_dua;
        }
        case '-' {
            hasil = nomer_satu - nomer_dua;
        }
        buat kasus seperti ini dengan + - * / 
    }
    default {
        printf("Salah masukin operatos\n");
    }
    printf("apakah mau hitung lagi? (y/n)") 
    jika ya maka ke awal 
    jika tidak maka return 0;
*/

// ! START 

#include <cstdlib>
#include <iostream>
#include <cstdio>

// ! DEKLARASI
long double nomer_satu, nomer_dua, hasil;
char operatos;

// ! PEMBUKAAN
void opening() {
    printf("\t=================KALKULATOR CPP==============\n");
}

void judul() {
    printf("\n\n\t---------------------------------------------\n");
    printf("\t|Perintah                         Simbol    |\n");
    printf("\t|Penjumlahan                         +      |\n");
    printf("\t|Pengurangan                         -      |\n");
    printf("\t|Perkalian                           *      |\n");
    printf("\t|Pembagian                           /      |\n");
    printf("\t---------------------------------------------\n\n");
}

void br() {
    printf("\n");
}

int main(int, char const *[]) {

    // ! MEMBERSIHKAN LAYAR CONSOLE
    #ifdef _WIN32
        system("cls");
    #endif

    #ifdef __APPLE__
        system("clear");
    #endif

    #ifdef __linux__
        system("clear");
    #endif

    // ! OPENING
    opening();

    // ! JUDUL
    judul();

    // ! INPUT
    printf("LOG----------------------------------------------------------\n");
    printf("Bilangan pertama operator bilangan kedua = hasil\n\n");
    printf("Masukkan bilangan pertama: ");
    scanf("%Lf", &nomer_satu);
    printf("Masukkan bilangan kedua: ");
    scanf("%Lf", &nomer_dua);
    
    printf("Masukkan simbol operator: ");
    std::cin >> operatos;

    // ! PROSES
    switch (operatos)
    {
    case '+':
        hasil = nomer_satu + nomer_dua;
        break;
    
    case '-':
        hasil = nomer_satu - nomer_dua;
        break;
    
    case '*':
        hasil = nomer_satu * nomer_dua;
        break;

    case '/':
        hasil = nomer_satu / nomer_dua;
        break;
    
    default:
        printf("\nOperator yang dimasukkan salah\n");
        return 0;
        break;
    }

    // printf("%Lf %c = %Lf\n", nomer_satu, operatos, nomer_dua, hasil);
    printf("\n%Lf %c ", nomer_satu, operatos);
    printf("%Lf = %Lf\n", nomer_dua, hasil);
    printf("\nEND----------------------------------------------------------\n");
    br();
    opening();
    
    // ! END
    return 0;
}