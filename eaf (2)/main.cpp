#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 int x=5;
 int& ref= x;
 int* ptr= &x;
 
 cout <<x;
 cout << ref;
 cout <<*ptr << endl;
 
 ref = 6;
 cout << x;
 cout << ref;
 cout <<*ptr << endl;
 *ptr=7;
 cout << x;
 cout << ref;
 cout << *ptr << endl;
   



	return 0;
}
