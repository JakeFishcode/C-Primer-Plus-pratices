#include <iostream>
using namespace std;
void fuc1(void);
int fuc2(int,float);
int main()
{
	int a =1;
	float b =2.0;
	fuc1();
	fuc2(a,b);
	return 0;
}

void fuc1(void)
{
	cout << "Three blind mice"<<endl;
}
int fuc2(int a,float b)
{
	cout << a << b;
	return a;
}
