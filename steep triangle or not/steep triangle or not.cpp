#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
cout << "please enter the first side of the triangle" << endl;
cin >> a;
cout << "please enter the second side of the triangle" << endl;
cin >> b;
cout << "please enter the third side of the triangle" << endl;
cin >> c;
if (a* a + b * b == c * c || a * a + c * c == b * b|| b * b + c * c == a * a)  
cout << "your triangle is a steep triangle." << endl;
else
cout << "your triangle isn't a steep triangle." << endl;
}

