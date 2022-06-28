#include <iostream>
using namespace std;
int main()
{
cout << "ENTER A BİG LETTER" << endl;
char a;
cin >> a;
int n=a;
for (int i = 0; i <= n-65; i++) {
	for (int b = 0; b <= i; b++) {
		
		cout << (char) (b+65);
	}
			for (int b = i - 1; b >= 0; b--) {
				cout << (char) (b+65);
	}
			cout << endl;
}
}