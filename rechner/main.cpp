#include <iostream>

using namespace std;

int main(){

	
	char islem ;
	float sayi1,sayi2;
	
	cout << "islem sec:" << endl;
	cin >> islem ;
	cout << "Iki sayi giriniz:" << endl;
	cin >> sayi1 >> sayi2 ;
	
	switch(islem){
		case '+' :cout <<"sonuc:\t"<< sayi1+sayi2 ; break ;
		case '-' :cout <<"sonuc:\t"<<sayi1-sayi2 ; break ;
		case '*' :cout << "sonuc:\t" << sayi1*sayi2 ; break ;
		case '/' :cout <<"sonuc:\t"<< sayi1/sayi2 ; break ;
		default: cout<<"??????????????????????";
	}
	
	
	return 0;
}

