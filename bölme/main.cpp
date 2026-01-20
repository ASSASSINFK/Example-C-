#include <iostream>
using namespace std;

int main() {
	
	
    int bolen, bolunen, sonuc = 0;

    cout << "Bolunen sayi gir: ";
    cin >> bolunen;
    cout << "Bolen sayiyi  gir: ";
    cin >> bolen;

    int i = bolunen;
    while (i >= bolen) {
        i -= bolen;
        sonuc++;
    }

    cout << "Bolum: " << sonuc << endl;

    return 0;
}

