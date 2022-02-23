#include <iostream>
#include <string>

using namespace std;
string word;

bool CheckIfPalindrome(string input);

int main()
{
	cout << "Enter a string." << endl;
	cin >> word;
	bool isPalindrome = CheckIfPalindrome(word);

	if (isPalindrome)
	{
		cout << "The word " << word << " is a palindrome." << endl;
	}
	else
	{
		cout << "The word " << word << " is not a palindrome." << endl;
	}
}

bool CheckIfPalindrome(string input)
{
	if (input.length() <= 1)
	{
		return true;
	}
	if (input[0] != input[(input.length() - 1)])
	{
		return false;
	}

	return CheckIfPalindrome(input.substr(1, input.length() - 2));
}