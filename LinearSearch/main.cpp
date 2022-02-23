#include <iostream>

using namespace std;

int arr[]{ 1, 5, 7, 2, 12 };
int searched;
int found;

int LinearSearch(int arr[], int length);

int main()
{
	cout << "Enter an integer to search for" << endl;
	cin >> searched;
	found = LinearSearch(arr, size(arr));
	if (found == -1)
	{
		cout << "Your integer was not found in the collection." << endl;
	}
	else
	{
		cout << "Your integer was found at index " << found << " in the collection." << endl;
	}
}

int LinearSearch(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == searched)
		{
			return i;
		}
	}
		return -1;
}
