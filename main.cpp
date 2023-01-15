#include <cstdio>
#include <iostream>

using namespace std;


string user, password;
int main() {
    printf("######WELCOME######\n");
    printf("Masukkan username: ");
    cin >> user;

    if (user == "admin") {
        awal:
        printf("Masukkan password: ");
        cin >> password;

        if (password == "_f8aqYL622Vd2wr") {
            printf("\nSelemat datang admin-Sama!\n");
        } else {
            printf("\nPassword yang dimasukkan salah, silahkan coba lagi\n");
            goto awal;
        }
    } else {
        printf("Welcome user-san!\n");
    }

    return 0;
}