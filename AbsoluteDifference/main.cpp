#include <iostream>

int AbsoluteDifference(int x, int y);
int MyAbs(int x);

int main() {

	int x{ 0 };
	int y{ 0 };

	std::cout << "Enter a value for x: " << std::endl;
	std::cin >> x;

	std::cout << "Enter a value for y: " << std::endl;
	std::cin >> y;

	std::cout << "The absolute difference between x and y is " << AbsoluteDifference(x, y);
	
}


int MyAbs(int x) {
	return ((x < 0) ? (-x) : (x));
}

int AbsoluteDifference(int x, int y) {

	int difference = x - y;
	return MyAbs(difference);
}