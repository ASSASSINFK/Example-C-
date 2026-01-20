#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
	
	
	char weiter;
    srand(time(0));
    string secimler[] = {"Tas", "Kagit", "Makas"};
    string oyuncuSecim;

    cout << "Tas Kagit Makas oyununa hos geldiniz!" << endl;
   
   do
   {
    int pcSecim = rand() % 3; 
    cout << "Seciminizi yapiniz =Tas Kagit Makas: ";
    cin >> oyuncuSecim;
     
    cout << "Bilgisayarin secimi: " << secimler[pcSecim] << endl;

    if (oyuncuSecim == secimler[pcSecim]) {
        cout << "Berabere!" << endl;
    } else if ((oyuncuSecim == "Tas" && secimler[pcSecim] == "Makas") ||
               (oyuncuSecim == "Kagit" && secimler[pcSecim] == "Tas") ||
               (oyuncuSecim == "Makas" && secimler[pcSecim] == "Kagit")) {
        cout << "Gluckwunsch! du hast gewonnen:)" << endl;
    } else {
        cout << "Bilgisayar kazandi:(" << endl;
    }
    
      cout << "Tekrar oynamak icin j ye tikla! cikmak icin n ye tikla!";
        cin >> weiter;
}while(weiter=='j' || weiter=='J');
    
	return 0;
}

