#include <iostream>
#include<cmath>
using namespace std;
/* FERAMZÝ KILIÇ 24103091060*/

double faktoriyel(int n) {


    double sonuc = 1.0;
    for (int i = 1; i <= n; ++i) {
        sonuc *= i;
    }
    return sonuc;
}
double taylor_exp(double x, int terim_sayisi) {
    double toplam = 1.0; 
    for (int i = 1; i < terim_sayisi; ++i) {
        toplam += (pow(x, i) / faktoriyel(i));
    }
    return toplam;
}
int main() {
    double x;
    int terim_sayisi;

    cout << "x deðerini girin: ";
    cin >> x;
    cout << "Terim sayisini girin: ";
    cin >> terim_sayisi;

    double sonuc = taylor_exp(x, terim_sayisi); 

    cout << "Taylor serisi ile exp(" << x << ") degeri: " << sonuc << endl;
    

    return 0;
}

