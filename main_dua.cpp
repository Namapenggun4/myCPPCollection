#include <cstdio>

int main(int, char const *[]) {
    
    char huruf;
    printf("Masukkan sebuah huruf: ");
    scanf("%c", &huruf);

    printf("Nilai ASCII pada karakter tersebut adalah %d", int(huruf));
    printf("\nProgram selesai :)\n");

    return 0;
}