#include <iostream>

using namespace std;

void RecursiveFibonacci(int number);
void IterativeFibonacci(int number);

int input;
int previousNumber{ 0 };
int currentNumber{ 1 };
int nextNumber{ 0 };

int main()
{
	cout << "How many steps of the Fibonacci sequence would you like to print?" << endl;
	cin >> input;
	//IterativeFibonacci(input);
	RecursiveFibonacci(input);
}


void RecursiveFibonacci(int number)
{
	cout << previousNumber << " ";

	nextNumber = previousNumber + currentNumber;
	previousNumber = currentNumber;
	currentNumber = nextNumber;

	while (input >= 0)
	{
		input--;
		RecursiveFibonacci(input);
	}

}

void IterativeFibonacci(int number)
{
	int previousStep{ 0 };
	int currentStep{ 1 };
	int nextStep{ 0 };

	for (int i = 0; i <= number; i++)
	{
		cout << previousStep << " ";
		nextStep = previousStep + currentStep;
		previousStep = currentStep;
		currentStep = nextStep;
	}
}