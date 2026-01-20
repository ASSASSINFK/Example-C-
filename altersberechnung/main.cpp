#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	

	
	int yas;
	
	cout << "Yasinizi giriniz lutfen:"<<endl;
	cin >> yas ;
	
	switch(yas){
		
		case 0 ... 2  : cout << " Bebeklik"  <<endl;break;
	    case 3 ... 13 : cout << "Cocukluk"   <<endl;break;
	    case 14 ... 21: cout << "Ergenlik"   << endl;break;
	    case 22 ... 33: cout << "Genclik"    << endl;break;
	    case 34 ... 57: cout << "Yetiskinlik"<<endl;
		break;
		
		default: cout << "Yaslýlýk"<<endl;
		break;	
	}
	
	
	
	
	return 0;
}
