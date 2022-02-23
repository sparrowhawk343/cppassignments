#include <iostream>
#include <string>


std::string EvenOrOdd(int integer);

int main() {

	int value;

	std::cout << "Enter an integer value: " << std::endl;
	std::cin >> value;

	std::cout << "The value you entered is " << EvenOrOdd(value);

}

std::string EvenOrOdd(int integer) {
	
	if (integer % 2 == 0)
	{
		return "even.";
	}
	else
	{
		return "odd.";
	}
	
}