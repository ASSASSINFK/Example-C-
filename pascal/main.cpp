#include<iostream>
using namespace std;

int main(){
	
    int i,j,sayi,number,a;
    
    cout << "satir sayisi gir:";
    cin >> a;
	
	for(i=0;i<a;i++){
		for(j=0;j<a-i;j++){
		
		
		cout << "  ";
    }
        
 	for(sayi=0;sayi<=i;sayi++){
	
	    if(sayi==0)
	    number=1;
	    else 
	    number=number*(i-sayi+1)/sayi;
	    cout << number << "    ";           
}

	cout << "\n";
	
}	 return 0;
}
	

     
