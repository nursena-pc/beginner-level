#include<iostream>
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
	if (b > a && a > c || c > a && a > b)
	{
		cout << "second number is the biggest number and third number is the smallest number, or third number is the biggest number and second number is the smallest number" << endl;
	}
	else
		cout << "first number isn't the median number" << endl;

	if (a == b && a < c)
		cout << "first number is equal to second number and first number is the smaller than third number" << endl;
	else
		cout << "first number isn't equal to second number or first number isn't smaller than third number" << endl;
	if (a > b || a > c)
		cout << "first number is bigger than second number or first number is bigger than third number" << endl;
	else
		cout << "first number isn't bigger than second number and first number isn't bigger than third number" << endl;
	if (a == b  && a == c)	
		cout << "first number is equal to second and third number" << endl;
	else
		cout << "first number isn't equal to second and third number" << endl;
}
