#include <cstdlib>
#include <cstdio>

int main() {
    #ifdef _WIN32
        system("cls");
        printf("Kamu menggunakan windows\n");
    #endif

    #ifdef __APPLE__
        system("cls");
        printf("Kamu menggunakan mac os\n");
    #endif

    #ifdef __linux__
        system("clear");
        printf("Kamu menggunakn Linux\n");
    #endif
        
    
    return 0;
}