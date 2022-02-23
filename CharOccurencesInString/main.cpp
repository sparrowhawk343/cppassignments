#include <iostream>
#include <map>
#include <string>

using namespace std;


string input;
std::map<char, int> stringMap;

void CheckOccurrences(string toEvaluate);


int main()
{
	cout << "Enter a string you would like evaluated." << endl;
	cin >> input;
	CheckOccurrences(input);
}

void CheckOccurrences(string toEvaluate)
{
	for (char letter : input)
	{
		if (stringMap.find(letter) != stringMap.end())
		{
			stringMap[letter]++;
		}
		else
		{
			stringMap.insert({ letter, 1 });
		}
	}
	cout << "KEY\tVALUE\n";
	for (auto itr = stringMap.begin(); itr != stringMap.end(); ++itr)
	{
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
}