/*
    TODO membuat diskonan sebelum hasilkan total bayar
    TODO membuat pilihan mau beli lagi gak ngentod
*/
#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;


bool diskon = false;
short int pilih, jumlah;
unsigned int bayar = 3238 * 0 + (823838 * 0);
char lagi;


int menu(void) {

    printf("===============FOTOCOPY PAK MAMAT=============\n");
    printf("Menu:\n\n");
    printf("1. Fotocopy / lembar Rp 500\n");
    printf("2. Print / lembar Rp 1000\n");
    printf("\n---Diskon jika pembelian diatas Rp 20.000---\n");
    printf("==============================================\n\n");
    return 0;
}

int main(void) {

    #ifdef __linux__
        system("clear");
    #endif

    #ifdef __APPLE__
        system("clear");
    #endif

    #ifdef _WIN32
        system("cls");
    #endif

    menu();

    spawn:
    printf("Pilih menu (dengan angka): ");
    scanf("%hd", &pilih);

    if (pilih == 1)
    {
        printf("Masukkan jumlah lembar yang mau difotocopy: ");
        scanf("%hd", &jumlah);
        bayar += jumlah * 500;
        
        if (diskon == false)
        {
            if (bayar >= 20000)
            {
                bayar = bayar * 95 / 100;
                diskon = true;
            }
            
        }
        
        
    } else if (pilih == 2) {
        printf("Masukkan jumlah yang mau di print: ");
        scanf("%hd", &jumlah);
        bayar += jumlah * 1000;

        if (diskon == false)
        {
            if (bayar >= 20000)
            {
                bayar = bayar * 95 / 100;
                diskon = true;
            }
    
        }
                
    } else {
        printf("Input berada di luar jangkauan\n");
        goto spawn;
    }

    printf("Apakah anda mau memesan lagi? (y/n)\n");
    cin >> lagi;


    switch (lagi)
    {
    case 'y':
        goto spawn;
        break;
    
    case 'n':
        printf("\nTotal bayar = Rp %u\n", bayar);
        break;

    default:
        printf("Pilihan anda berada di luar jangkauan\n");
        break;
    }
    return 0;   
}