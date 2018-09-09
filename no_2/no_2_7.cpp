#include <iostream>
using namespace std;

void p1(int);
void p2(int);

int main()
{
	cout << "Enter the number of hours:";
	int hour;
	cin >> hour;
	int minute;
	cout <<"Enter the number of minutes:";
	cin >> minute;
	cout << "Time:";
	p1(hour);
	cout << ":";
	p2(minute);
	cout << endl;
}


void p1(int a)
{
	cout <<a;
}
void p2(int a)
{
	cout <<a;
}
