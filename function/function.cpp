#include<iostream>
using namespace std;
int factorial(int x) {
	int product = 1;
	for (int a = 1; a <= x; a++) {
		product *= a;
	}
	return product;
}
 int combination(int n , int r){
	 return factorial(n) / (factorial(r) * factorial(n - r));
}



int main()
{
	cout << "enter a number" << endl;
	int n;
	cin >> n;
	cout << "enter a number smaller than first number" << endl;
	int r;
	cin >> r;
	cout << combination(n, r) << endl;

}
