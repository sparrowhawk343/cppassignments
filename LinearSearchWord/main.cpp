#include <iostream>
#include <string>

using namespace std;

string input;
string search;

void LinearSearchWord(string sentence);

int main()
{
	cout << "Input a sentence to search for a word in." << endl;
	getline(cin, input);
	cout << "Input a word to search for." << endl;
	cin >> search;
	LinearSearchWord(input);
}

void LinearSearchWord(string sentence)
{
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == search[0])
		{
			bool found = true;
			for (int j = 0; j < search.length(); j++)
			{
				if (sentence[i + j] == search[j])
				{
					continue;
				}
				else
				{
					found = false;
					break;
				}
			}
			if (found && (sentence[i + search.length()] == ' ' || sentence[i + search.length()] == 0))
			{
				cout << "The sentence contained the word " << search << "." << endl;
				return;
			}
		}
		for (; i < sentence.length(); i++)
		{
			if (sentence[i] == ' ')
			{
				break;
			}
		}
	}
	cout << "The sentence did not contain the word " << search << "." << endl;
}