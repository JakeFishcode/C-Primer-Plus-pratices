//limits.cpp -- some integer limits
#include <iostream>
#include <climits>
int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	
	//sizeof operator yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes"<<endl;
	cout << "short is " << sizeof(n_short) << " bytes" <<endl;
	cout << "long is " << sizeof(int) << " bytes" << endl;
	cout << "long long is " << sizeof(int) << " bytes" << endl;
	return 0;
}
