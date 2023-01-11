#include <cstdio>

int count;

int main() {
    printf("Masukkan angka yang mau di loop: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count;j = 1)
        {
            printf("%d \n", j);
        }
        printf("\n");
    }
    
    return 0;
    
}
