#include <iostream>
#include <string>
#include <vector>

using namespace std;

int input;
bool lucky;

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
		if (find(digitsAsLetters.begin(), digitsAsLetters.end(), letter) != digitsAsLetters.end())
		{
			cout << "The integer value " << input << " is not lucky." << endl;
			lucky = false;
			break;
		}
		else
		{
			digitsAsLetters.push_back(letter);
		}
		lucky = true;
	}
	if (lucky)
	{
		cout << "The integer value " << input << " is indeed a lucky number!" << endl;
	}


}