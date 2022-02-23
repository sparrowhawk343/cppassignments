#include <iostream>

double CelsiusToFahrenheit(double celsius);

int main() {

	double celsius{ 0 };

	std::cout << "Enter a Celsius value to convert: " << std::endl;
	std::cin >> celsius;

	std::cout << celsius << " degrees in Celsius is " << CelsiusToFahrenheit(celsius) << " degrees in Fahrenheit." << std::endl;

}

double CelsiusToFahrenheit(double celsius) {
	return ((celsius * 9) / 5) + 32;
}