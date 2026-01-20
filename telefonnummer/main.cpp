#include <iostream>
#include <string>

using namespace std;

string isimler[] = {"MFY", "Yusufali", "MehmetBruder","Hasan","Aliyan"};
string numaralar[] = {"555-1234", "555-5678", "555-8765","555-1421","555-4431",};
int rehberBoyutu = sizeof(isimler) / sizeof(int);

string telBul (string isim) {
    for (int i = 0; i < rehberBoyutu; i++) {
        if (isimler[i] == isim) {
            return numaralar[i];
        }
    }
    return "Bulunamadý";
}
int main() {
	
	cout <<"FERAMIZ_KILIC-24103091060"<<endl;
    
    string isim;
    cout << "Isim girin: ";
    cin >> isim;

    string sonuc = telBul(isim);
    if (sonuc == "Bulunamadý") {
        cout << "Bulunamadý" << endl;
    } else {
        cout << isim << " numarasi: " << sonuc << endl;
    }

    return 0;
}

