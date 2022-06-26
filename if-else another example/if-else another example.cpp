#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout << "enter first number" << endl;
	cin >> a;
	cout << "enter second number" << endl;
	cin >> b;
	cout << "enter third number" << endl;
	cin >> c;
	if (a < b && a < c && b < c)
	{
		cout << a << "is the smallest number" << endl;
		cout << c << "is the biggest number" << endl;
	}
	else if (a < b && a < c && c < b)
	{
		cout << a << "is the smallest number" << endl;
		cout << b << "is the biggest number" << endl;
	}
	else if (b < a && b < c && a < c)
	{
		cout << b << "is the smallest number" << endl;
		cout << c << "is the biggest number" << endl;
	}
	else if (b < a && b < c && c < a)
	{
		cout << b << "is the smallest number" << endl;
		cout << a << "is the biggest number" << endl;
	}
	
	else if (c < a && c < b&&a<b)
	{
		cout << c << "is the smallest number" << endl;
		cout << b << "is the biggest number" << endl;
	}
	else if (c < a && c < b && b < a)
	{
		cout << c << "is the smallest number" << endl;
		cout << a << "is the biggest number" << endl;
	}
	else
		cout << "any of the three numbers is equal to another number" << endl;

}