#include <iostream>

   /* FERAMÝZ KILIÇ 24103091060 */



using namespace std;

int main(int argc, char** argv) {
	
	cout <<  "ISIM SOYAD:" << "FERAMIZ KILIC" << endl;
	cout <<  "no:" << "24103091060" << endl;
	
	int sayi1,sayi2;
	
	
	cout << "Bir sayi giriniz:" << endl ;
	cin >> sayi1; 
	
	cout << "Diger sayiyi giriniz:" << endl ;
	cin >> sayi2 ;
	
	
    sayi1 > sayi2 ? cout << "Ilk sayi buyuktur" : 
	sayi1 < sayi2 ? cout << "Ikinci sayi buyuktur" : 
	cout << "Sayilar esittir";


	return 0;
}
