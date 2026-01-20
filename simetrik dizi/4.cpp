#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int n;
		
	cout << "Kare matris kaca kac olsun:"<< endl;
	    cin >> n;
	    
	    int matris[n][n];
	    cout << "matris degerlerini girin:"<<endl;
	    
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<n;j++){
	    		cin >> matris[i][j];
			}
		}
		
	int simetrik = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) { 
            if (matris[i][j] != matris[j][i]) {
                simetrik = 0;
               break ;
            }
        }
        if (simetrik == 0) break;
    }

    if (simetrik == 1) {
        cout << "Matris simetriktir." << endl;
    } else {
        cout << "Matris simetrik degildir." << endl;
    }

	
	return 0;
	
}
