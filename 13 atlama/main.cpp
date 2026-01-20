#include <iostream>
#include <string>
using namespace std;

char sifreleme(char c)
 {
    if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + 13) % 26;
    }
    else if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + 13) % 26;
    }  
    else {
        return c;
    }
}
int main() {

    string kelime;
    cout << "Bir kelime girin: ";
    cin >> kelime;

    string sifreliKelime = "";
    for (int i = 0; i < kelime.length(); ++i) {
        sifreliKelime += sifreleme(kelime[i]);
    }

    cout << "Sifrelenmis kelime: " << sifreliKelime << endl;

    return 0;
}

