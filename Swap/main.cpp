#include <iostream>
#include <string>

using namespace std;

void SwapWithReference(int &a, int &b);
void SwapWithPointers(int* a, int* b);
void SwapWithMaf(int& a, int& b);

int main() {

	int a;
	int b;

	cout << "Enter an integer value for number A: " << endl;
	cin >> a;

	cout << "Enter an integer value for number B: " << endl;
	cin >> b;

	cout << "Swapping now " << std::endl;

	//SwapWithPointers(&a, &b);
	SwapWithMaf(a, b);

	cout << "Swapping complete " << endl;

	cout << "Number A is now " << a << endl;
	cout << "Number B is now " << b << endl;
}

void SwapWithReference(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void SwapWithPointers(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void SwapWithMaf(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;

	//a = a * b;
	//b = a / b;
	//a = a / b;

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
}



