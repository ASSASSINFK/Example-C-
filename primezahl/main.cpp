#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char** argv)
 {
,
    
    int sayi, i, j, control = 0;
    int adet;
do {
        cout << "Bir sayi giriniz:\n";
        cin >> sayi;

        adet = 0; 

    for (i = 2; i <= sayi; i++) {
            control = 0;

    for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                    control = 1;
                    break;
            }
        }

        if (control == 0) {
                cout << i << " ";
                adet++;
         }
        }

        cout << "\nToplam asal sayi : " << adet << "\n";
    } while (sayi != 1);

    return 0;
}

