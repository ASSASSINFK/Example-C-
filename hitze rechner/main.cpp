#include <iostream>

using namespace std;              

int main(int argc, char** argv) {
	
	
	int sec;
	float hitze;
	
	
	cout <<"1 = F zu C:" << endl;
	cout <<"2 = C zu F:" << endl;
	    cin >> sec;
	 
	cout << "Sicaklik degerini giriniz:" << endl ;
	    cin >> hitze;
	
	switch(sec){
		
		case 1 : 
	        cout << "Celsius karsiligi="<<(hitze-32)/1.8 << endl;break;
	    
	    case 2 : 
	        cout << "Fahrenheit karsiligi="<<(hitze*1.8)+32 << endl;break;
	    
	    default:
	    	cout <<"????????";
	    	break;
	}
	return 0;
}
