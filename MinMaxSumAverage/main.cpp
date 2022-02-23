#include <iostream>
#include <string>

using namespace std;

int numbers[6]{15, 12, 2, 87, 34, 56};

int GetSum();
int GetMin();
int GetMax();
auto GetAverage() -> double;

int main()
{
	cout << "The highest value in the array is " << GetMax() << endl;
	cout << "The lowest value in the array is " << GetMin() << endl;
	cout << "The average value in the array is " << GetAverage() << endl;
	cout << "The sum of the array is " << GetSum() << endl;
}

int GetSum()
{
	int sum = 0;
	for (int number : numbers)
	{
		sum += number;
	}
	return sum;
}

int GetMin()
{
	int lowest = numbers[0];
	for (int number : numbers)
	{
		if (number < lowest)
		{
			lowest = number;
		}
	}
	return lowest;
}

int GetMax()
{
	int highest = 0;
	for (int number : numbers)
	{
		if (number > highest)
		{
			highest = number;
		}
	}
	return highest;
}

double GetAverage()
{
	return (GetSum() / size(numbers));
}