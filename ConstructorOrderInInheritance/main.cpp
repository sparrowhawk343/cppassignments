#include <iostream>

using namespace std;

class ClassA
{
public:
	ClassA()
	{
		cout << "Constructor A called" << endl;
	}

	~ClassA()
	{
		cout << "Destructor A called" << endl;
	}
};

class ClassB : public ClassA
{
public:
	ClassB() : ClassA()
	{
		cout << "Constructor B called" << endl;
	}

	~ClassB()
	{
		cout << "Destructor B called" << endl;
	}
};

class ClassC : public ClassB
{
public:
	ClassC() : ClassB()
	{
		cout << "Constructor C called" << endl;
	}

	~ClassC()
	{
		cout << "Destructor C called" << endl;
	}
};


int main()
{
	ClassC classC;
}