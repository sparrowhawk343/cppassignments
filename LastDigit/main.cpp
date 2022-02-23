#include <iostream>
#include <string>

int LastDigit(int integer);

int main() {

	int value;

	std::cout << "Enter an integer value: " << std::endl;
	std::cin >> value;

	std::cout << "The last digit of the value you entered is " << LastDigit(value);

}

int LastDigit(int integer) {

	return abs(integer) % 10;
}