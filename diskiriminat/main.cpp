#include <iostream>
#include <math.h>

using namespace std;
/* FERAMÝZ KILIÇ 24103091060 */

int main(int argc, char** argv) {
	
	
	cout <<  "ISIM SOYAD:" << "FERAMIZ KILIC" << endl;
	cout <<  "no:" << "24103091060" << endl;
	
	int delta, denklem ;
	
	  int a,b,c,x,ilk_kok,ikinci_kok;
	  
	  cout << " a sayisini gir:";
    cin >> a ;
      cout << "b sayisini gir:";
    cin >> b;
      cout << " c sayisini gir:";
    cin >> c;
    
      

    // Diskriminant
    
    denklem =a*x*x+b*x+c;
      
	  delta = b*b-4*a*c;
	  ilk_kok=(-b-sqrt(delta))/2*a;
	  ikinci_kok=(-b+sqrt(delta))/2*a;
	    
		cout << "diskriminant" << delta << endl;
		cout << "ilk kok"  << ilk_kok << endl;
		cout << "ikinci kok " << ikinci_kok ;	
	
	return 0;
}
