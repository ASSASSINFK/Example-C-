#include <iostream>
using namespace std;

int main() {

    int sayi;

    cout << "Bir sayý girin: ";
    cin >> sayi;

    for (int i = 1; i <= 200; ++i) {
        int kat = i;
        int sonuc = sayi * kat;
        cout << sonuc << "\t";

        if (i % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}



