#include <iostream>
#include <string>

using namespace std;

int guessed;
int secret;
int tries;
bool foundSecret = false;

int RandomizeBetweenMinMax(int min, int max);
void ResetGame();
void StartGame();
int ReadInput();

int main()
{
	StartGame();
}

int RandomizeBetweenMinMax(int min, int max)
{
	return min + (rand() % (max - min + 1));
}

void ResetGame()
{
	tries = 0;
	secret = 0;
	guessed = 0;
	foundSecret = false;
}

void StartGame()
{
	int min;
	int max;
	string response;

	cout << "Enter a minimum value for secret number range: " << endl;
	min = ReadInput();

	cout << "Enter a maximum value for secret number range: " << endl;
	max = ReadInput();

	secret = RandomizeBetweenMinMax(min, max);

	cout << "Enter a guess, the correct value is between " << min << " and " << max << "." << endl;

	bool isValidInt;

	guessed = ReadInput();

	while (foundSecret == false)
	{
		if (guessed == secret)
		{
			tries++;
			cout << "Congratulations, you guessed right! The value was " << secret << "!" << endl;
			cout << "It took you " << tries << " tries to find the right number!" << endl;
			foundSecret = true;
			cout << "Would you like to play again? y/n" << endl;
			cin >> response;
			if (response == "y")
			{
				ResetGame();
				StartGame();
			}
			else
			{
				break;
			}
		}
		else
		{
			tries++;
			cout << "Sorry, that guess was incorrect. Try again." << endl;
			cout << "Enter a guess, the correct value is between " << min << " and " << max << "." << endl;
			guessed = ReadInput();
		}
	}
}

int ReadInput()
{
	int guess;
	while (!(cin >> guess))
	{
		cout << "Please enter a valid integer." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return guess;
}



