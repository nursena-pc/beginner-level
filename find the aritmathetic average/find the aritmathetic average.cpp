#include <iostream>
using namespace std;
int main()
{
int total=0;
for (int i = 0; i < 5; i++) {
	int entered;
	cout << "enter a number" << endl;
	cin >> entered;
	total += entered;
}
cout << "aritmathetic average: " << total/ 5 << endl;
}