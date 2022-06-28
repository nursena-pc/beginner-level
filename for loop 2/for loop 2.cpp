#include <iostream>
using namespace std;
int main()
{
	cout << " enter a number " << endl;
int number;
cin >> number;
for (int a = 1; a <= number;a++) {
	for (int b = 1; b <= number; b++) {
		if (a + b == number+1)
			cout << "1";
		else if(a+b>number)
			cout << "1";
		else
			cout << "0";
	}
	cout << endl;
}
}