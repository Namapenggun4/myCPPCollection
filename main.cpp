/*Dalam kasus ini saya membuat contoh syarat tinggi badan dalam test tertentu, dimana jika jenis kelamin memilih no.1 atau laki-laki dan tinggi badan lebih dari 165, maka memenuhi syarat dan lulus, selain dari itu jika jenis kelamin memilih no.1 dan tinggi badan kurang dari 165cm maka tidak lulus. selanjutnya jika jenis kelamin memilih no.2 atau perempuan dan tinggi badan lebih dari 160 maka memenuhi syarat dan lulus, tapi jika jenis kelamin memilih no.2 atau perempuan dan tinggi badan kurang dari 160cm maka tidak lulus.*/


/*
    ! LOGARITMA

    input pilih

    jika milih 1 = laki laki 
        jika >= 165 lulus
        jika < 165 gagal 
    jika milih 2 = perempuan 
        jika >= 160 lulus
        jika < 160 gagal

    output hasil
*/
#include <cstdio>
#include <cstdlib>

short int pilih, tinggi;

int menu() {
    printf("########## Cek Kelulusan ##########\n");
    printf("Jenis kelamin: \n");
    printf("1. Laki - laki ♂️\n");
    printf("2. Perempuan ♀️\n\n");

    return 0;
}

int main() {

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

    // * memilih jenis kelamin
    cobalagi:
    printf("Pilih jenis kelamin (dengan angka): ");
    scanf("%hd", &pilih);

    // * mengisi tinggi badan
    printf("Masukkan tinggi badan (dengan angka): ");
    scanf("%hd", &tinggi);
    printf("\n");

    if (pilih == 1)
    {
        if (tinggi >= 165)
        {
            printf("Selamat Ananda LULUS!\n");
        } else if (tinggi < 165) {
            printf("\nMohon Maaf Anda Gagal\n");
        } else {
            printf("\nPilihan berada di luar jangkauan\n");
            goto cobalagi;
        }
        
    } else if (pilih == 2) {
        if (tinggi >= 160) {
            printf("Selamat Ananda LULUS!\n");
        } else if (tinggi < 160) {
            printf("\nMohon Maaf Anda Gagal\n");
        } else {
            printf("\nPilihan berada di luar jangkauan\n");
            goto cobalagi;
        }
    } else {
        goto cobalagi;
    }
    
    return 0;
}