#include <cstdio>

int main() {
    short int n;

    printf("Masukkan sebuah integer: ");
    scanf("%hd", &n);

    if (n > 0) {
        printf("\nKamu memasukkan bilangan positif\n");
    } else if (n < 0) {
        printf("\nKamu memasukkan bilangan negatif\n");
    } else if (n == 0) {
        printf("\nKamu memasukkan bilangan 0\n");
    } else {
        printf("\nInputan berada di luar jangkauan\n");
    }
    
    return 0;
}