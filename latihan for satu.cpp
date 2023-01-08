#include <cstdio>
#include <string>
using namespace std;

void br() {
	printf("\n");
}

int main(int, char const *[]) {
	// standar perulangan for
	unsigned short int count, i;

	// berfungsi untuk merubah hasil yang ditampilkan
	unsigned short int perubahan = 1;

	// hasil yang mau diprintkan
	unsigned short int hasil = 0;

	// membersihkan layar terminal
	system("clear");

	// proses
	printf("Mau ulang berapa: ");
	scanf("%hu", &count);

	for ( i = 0; i < count; i++)
	{
		printf("%hu ", hasil);
		hasil += perubahan;
		perubahan += 2;
	}

	printf("\n");
	return 0;
}
