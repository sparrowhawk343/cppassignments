#include <iostream>
#include <string>
#include <vector>

using namespace std;

int input;

void IsLucky(int number);

int main()
{
	cout << "Enter an integer value to check for luck: " << endl;
	cin >> input;
	IsLucky(input);
}


void IsLucky(int number) {
	string conversion = to_string(number);
	vector<char> digitsAsLetters;

	for (char letter : conversion) {
		digitsAsLetters.push_back(letter);
	}


}