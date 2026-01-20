  #include <iostream>

    using namespace std;

int main() {

    
	 int sayi1, sayi2, bolum, kalan;

      cout << "Ilk sayiyi gir: ";
      cin >> sayi1;

      cout << "Ikinci sayiyi gir: ";
     cin >> sayi2;

  
          bolum = sayi2 != 0 ? sayi1 / sayi2 : 0;
          kalan = sayi2 != 0 ? sayi1 % sayi2 : sayi1;

          cout << "bolum\t" << bolum << endl;
          cout << "kalan\t" << kalan << endl;

  return 0;
}
