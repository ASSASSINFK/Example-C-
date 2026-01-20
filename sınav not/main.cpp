#include <iostream>
using namespace std;

int main() {

	
    int ogrenciSayisi = 10;
    
    int notSayisi = 4;
    int dersSayisi = 3;


    double ogrenciler[dersSayisi][ogrenciSayisi][notSayisi];


    for (int ders = 0; ders < dersSayisi; ders++) {
        cout << "Ders " << ders + 1 << " için notlari girin:" << endl;
        for (int ogrenci = 0; ogrenci < ogrenciSayisi; ogrenci++) {
            cout << "ogrenci " << ogrenci + 1 << ":" << endl;
            for (int notTuru = 0; notTuru < notSayisi; notTuru++) {
                switch (notTuru) {
                    case 0: cout << "Vize: "; break;
                    case 1: cout << "Kisa sinav: "; break;
                    case 2: cout << "Odev: "; break;
                    case 3: cout << "Final: "; break;
                }
                cin >> ogrenciler[ders][ogrenci][notTuru];
            }
        }
    }

    
    
    for (int ders = 0; ders < dersSayisi; ders++) {
        cout << "Ders " << ders + 1 << " için ortalamalar:" << endl;
        for (int ogrenci = 0; ogrenci < ogrenciSayisi; ogrenci++) {
            double toplam = 0.0;
            for (int notTuru = 0; notTuru < notSayisi; notTuru++) {
                toplam += ogrenciler[ders][ogrenci][notTuru];
            }
            double ortalama = toplam / notSayisi;
            cout << "ogrenci " << ogrenci + 1 << " ortalamasi: " << ortalama << endl;
        }
    }

    return 0;
}

