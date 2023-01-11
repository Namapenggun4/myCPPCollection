/*
    TODO SAYA BUKAN PEMALAS
    TODO SAYA INGIN MENDAPATKAN BEASISWA DAN RANKING 1 
    TODO SAYA HARUS MENANG SAYA HARUS SEMANGAT
*/

#include <cstdio>

int main() {
    unsigned long int perubahan = 1, n, hasil = 0;
    char keluar;

    start:
    printf("Masukkan nilai n: ");
    scanf("%lu", &n);

    // while (long unsigned int i = 1; i <= n; i++)
    // {
        // printf("%lu", hasil);
        // hasil += perubahan;
        // perubahan++;
    // }

    for (long unsigned int i = 1; i <= n; i++)
    {
        printf("%lu ", hasil);
        hasil += perubahan;
        perubahan++;
    }
    
    printf("\nApakah anda ingin keluar? (y/n)\n");
    scanf("%c", &keluar);

    // switch (keluar)
    // {
    // case 'y':
        // break;
    // 
    // case 'n':
        // goto start;
        // break;
    // 
    // default:
        // printf("\nInput berada di luar jangkauan :(");
        // break;
    // }

    if(keluar == "y") {} else if (keluar == "n") {
        goto start;
    }

    printf("\nProgram selesai :)\n");
    printf("\n");

    return 0;
    
}