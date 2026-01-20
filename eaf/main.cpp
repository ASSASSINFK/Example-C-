#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

     int a1=13;
     int *pa1;
     cout << "a1 icerigi:"<<a1<<endl;
      cout << "a1 adresi:"<<&a1<<endl;
      pa1=&a1;
      cout <<"a1 adresi:"<<pa1 << endl;
cout <<"pa1 icerigi:"<<*pa1 << endl;
cout <<"pa1 adresi:"<<&pa1 << endl;
*pa1=15;
   cout <<"pa1 icerigi:"<<*pa1 << endl;
cout <<"pa1 icerigi:"<<a1 << endl;
cout<< "pa1 adresi:"<<&pa1 << endl;
pa1=NULL;

cout <<"pa1 iceerigi:"<<pa1 << endl;
cout <<"pa1 adresi:"<<&pa1 << endl;
	return 0;
}
