#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int sayi,i=1;
	
	cout << "Bir sayi gir:";
        cin >> sayi;
        
        
    while(i<=20){
    	
    cout << sayi << " X " << i << " = " << sayi*i << "\n";
    i++; 
    	
	}
	
	
	
	return 0;
}
