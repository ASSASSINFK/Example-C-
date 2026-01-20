#include <iostream>
using namespace std;


int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return -1; 
}

int main() {
	
	
    int m, n;
    cout << "m ve n degerlerini girin: ";
    cin >> m >> n;

    int sonuc = ackermann(m, n);
    cout << "Ackermann fonksiyonu A(" << m << ", " << n << ") = " << sonuc << endl;

    return 0;
}

