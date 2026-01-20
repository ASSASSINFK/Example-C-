#include <iostream>
#include <string>
using namespace std;

void baslikYazdir(string ayAdi) {
    cout << "-------------------" << endl;
    cout << ayAdi<< endl;
    cout << "Pzt|Sali|Cars|Pers|Cuma|Ctesi|Pazar" << endl;
}

void gunleriYazdir(int ilkGun, int toplamGun) {
    int gun = 1;

    for (int i = 0; i < ilkGun; ++i) {
        cout << "     ";
    }

    for (int i = ilkGun; i < 7; ++i) {
        cout << (gun < 10 ? " " : "") << gun << " | ";
        ++gun;
    }
    cout << endl;

    while (gun <= toplamGun) {
        for (int i = 0; i < 7 && gun <= toplamGun; ++i) {
            cout << (gun < 10 ? " " : "") << gun << " | ";
            ++gun;
        }
        cout << endl;
    }
}

int main() {
	
	cout << "FERAMIZ KILIC 24103091060"<<endl;
    string aylar[] = {"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran",
                      "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
    int gunSayisi[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ilkGun = 6; 

    cout << "2023 Yili Takvimi:\n\n";

    for (int i = 0; i < 12; ++i) {
        baslikYazdir(aylar[i]);
        gunleriYazdir(ilkGun, gunSayisi[i]);
        cout << endl;

        ilkGun = (ilkGun + gunSayisi[i]) % 7;
    }

    return 0;
}

