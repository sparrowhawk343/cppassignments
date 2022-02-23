#include <iostream>
#include <string>

using namespace std;

string input;
int number;
int n;
int output;

int GetNthBit(int number, int n);
int SetNthBit(int number, int n);
int ToggleNthBit(int number, int n);

string toBinary(int n, int length);

int main()
{
	while (input != "g" || input != "s" || input != "t")
	{
		cout << "Do you want to get (g), set (s) or toggle (t) the nth bit of a number?" << endl;
		
		cin >> input;
		if (input == "g")
		{
			cout << "Enter a number to get the nth bit from." << endl;
			cin >> number;
			cout << "Enter a value for n." << endl;
			cin >> n;
			output = GetNthBit(number, n);
			cout << "The bit in position " << n << " in the number " << number << " is " << output << "." << endl;
			cout << "The number " << number << " in binary looks like this: " << toBinary(number, 8);
			break;

		}
		if (input == "s")
		{
			cout << "Enter a number to set the nth bit on." << endl;
			cin >> number;
			cout << "Enter a value for n." << endl;
			cin >> n;
			cout << "Before setting your bit your number looks like this: " << toBinary(number, 8) << endl;
			output = SetNthBit(number, n);
			cout << "After setting your bit your number looks like this: " << toBinary(output, 8) << endl;
			break;
		}
		if (input == "t")
		{
			cout << "Enter a number to toggle the nth bit on." << endl;
			cin >> number;
			cout << "Enter a value for n." << endl;
			cin >> n;
			cout << "Before toggling your bit your number looks like this: " << toBinary(number, 8) << endl;
			output = ToggleNthBit(number, n);
			cout << "After toggling your bit your number looks like this: " << toBinary(output, 8) << endl;
			break;
		}
		else
		{
			cout << "Please enter either 'g' to get a bit value or 's' to set a bit value." << endl;
		}
	}
}



int GetNthBit(int number, int n)
{
	return 1 &(number >> (n - 1));
}

int SetNthBit(int number, int n)
{
	int targetedBit = 1UL;
	targetedBit = targetedBit << (n - 1);

	return number |= targetedBit;
}

int ToggleNthBit(int number, int n)
{
	int targetedBit = 1UL;
	targetedBit = targetedBit << (n - 1);

	return number ^= targetedBit;
}


string toBinary(int n, int length)
{
	string binary;
	for (unsigned i = (1 << length - 1); i > 0; i = i / 2) {
		binary += (n & i) ? "1" : "0";
	}

	return binary;
}

