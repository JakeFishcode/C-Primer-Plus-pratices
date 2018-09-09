//hexoc2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
	int chest = 88;
	int waist = 42;
	int inseam = 42;
	
	cout << "Monsieur cuts a striking figure!" << endl;
	//cout << dec;
	cout << "chest = " << chest << "(decimal for 42)"<<endl;
	cout << hex;
	cout << "waist = " << waist << "(hexadecimal for 42)" <<endl;
	cout << oct;
	cout << "inseam = " << inseam << "(octal for 42)" <<endl;
	return 0;

}
