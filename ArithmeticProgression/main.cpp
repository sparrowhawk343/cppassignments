#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int numbers[6]{1, 3, 5, 8, 9, 11};
bool hasArithmeticProgression = false;

bool CheckForProgression(int arr[], int length);

int main()
{
	if (CheckForProgression(numbers, size(numbers)) == true)
	{
		cout << "This set of numbers has arithmetic progression." << endl;
	}
	else
	{
		cout << "This set of numbers does not have arithmetic progression." << endl;
	}
}

bool CheckForProgression(int arr[], int length)
{
	sort(arr, arr + length);

	int difference = arr[1] - arr[0];

	for (int i = 2; i < length; i++)
	{
		if (arr[i] - arr[i - 1] != difference)
		{
			return false;
		}
	}
	return true;
}
