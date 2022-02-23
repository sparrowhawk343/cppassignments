#include <iostream>
#include <string>

using namespace std;

string inputString;

string ReverseString(string input, int length);

int main()
{
	cout << "Enter a string to be reversed." << endl;
	getline(cin, inputString);
	int length = size(inputString);
	cout << ReverseString(inputString, length);
}

string ReverseString(string input, int length)
{
	string outputString;

	for (int i = length - 1; i >= 0; --i)
	{
		outputString.push_back(inputString[i]);
	}
	return outputString;
}