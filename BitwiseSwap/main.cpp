#include <iostream>
#include <string>

using namespace std;

void BitwiseSwap(int& a, int& b);

int main() {

	int a;
	int b;

	cout << "Enter an integer value for number A: " << endl;
	cin >> a;

	cout << "Enter an integer value for number B: " << endl;
	cin >> b;

	cout << "Swapping now " << std::endl;

	BitwiseSwap(a, b);

	cout << "Swapping complete " << endl;

	cout << "Number A is now " << a << endl;
	cout << "Number B is now " << b << endl;
}

void BitwiseSwap(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}




