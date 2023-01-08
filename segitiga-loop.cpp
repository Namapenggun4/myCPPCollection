#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("clear");
    cout << "##  Program C++ Segitiga Angka  ##" << endl;
    cout << "==================================" << endl;
    cout << endl;
    
    unsigned long int tinggi_segitiga,i,j;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi_segitiga;

    cout << endl;

    for(i=1;i<=tinggi_segitiga;i++) {

            for(j=1;j<=i;j++) {

                cout << i <<" ";
            }
            
        cout << endl;
    }

    return 0;
}
