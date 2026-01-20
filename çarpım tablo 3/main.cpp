#include <iostream>
using namespace std;
      
int main() {
    int sayi=0, n;
     
    cout << "Bir sayi girin: ";
    cin >> n;

    cout << "\n" << sayi << " tablo:\n\n";

    int satir = 1;
    int sutun = 1;

    do {
        do {
            cout << sayi << " \t"; 
			sayi += n;
			sutun++;
            
        } while (sutun <= 10);

        cout << endl;
        sutun = 1;
        satir++;
    } while (satir <= 20);

return 0;
}
