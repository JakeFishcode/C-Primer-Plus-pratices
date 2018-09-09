#include <iostream>
using namespace std;
void print_tp(float);

int main()
{
	cout << "Please enter a Celsius value:";
	float temp;
	cin >> temp;
	print_tp(temp);
	return 0;
}

void print_tp(float temp)
{
	cout << temp << " degrees Celsius is "<<temp*1.8+32.0<<" degrees Fahrenheit" << endl;
}
