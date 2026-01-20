

 	#include <iostream>
 
    /* FERAMÝZ KILIÇ 2403091060 */
    using namespace std;

int main() {
	
	   cout << "ISIM_SOYAD\t" << "FERAMIZ KILIC" << endl;
	   cout << "no\t"   <<  "24103091060"  << endl;
    
       int sayi;
    

          cout << "Bir sayi giriniz:";
          cin >> sayi;

        cout <<sayi <<(sayi % 2 == 0 ? " cift bir sayi." : " tek bir sayi.")<< endl;

  return 0;
}
