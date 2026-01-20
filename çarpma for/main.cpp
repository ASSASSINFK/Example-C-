#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	
	
	int sayi1, sayi2, carpim = 0;

    cout << "Ilk sayiyi giriniz:";
        cin >> sayi1;
     cout << "Ikinci sayiyi giriniz:";
        cin >> sayi2;

    for (int i = 0; i <sayi2;++i) {
    	
        carpim += sayi1;
	 }

    cout << "Carpim:" << carpim << endl;
    
	return 0;
}
