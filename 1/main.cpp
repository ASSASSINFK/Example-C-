#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int sayi1 = 0, sayi2 = 1, guncel;
    for (int i = 2; i <= n; i++) {
        guncel = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = guncel;
    }
    return guncel;
}

int main() {


    int n;
    cout << "N degerini girin: ";
    cin >> n;

    int sonuc = fibonacci(n);
    cout << "Fibonaccideki " << n << ". eleman: " << sonuc << endl;

    return 0;
}

