
#include <iostream>

using namespace std;

int main() {
	
	
	
  int sayi, toplam = 0, sayac = 0;
  int i=1;
  
  cout << "Bir sayi girin: ";
  cin >> sayi;

 
  while (i <= sayi) {
    i++;
    
    if (i % 3 == 0) {
      toplam += i; 
      sayac++; 
    }
  }

  
  double ortalama = (double)toplam / sayac;

  cout << "3 e bolunen sayilarin ortalamasi: " << ortalama << endl;

  return 0;
}

