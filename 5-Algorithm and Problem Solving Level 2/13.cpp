#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int i = 0;
	do
	{
		cout << message << endl;
		cin >> i;
	}while (i <= 0);
	return i;
}

void PrintNumberPatter(int number)
{
	cout << endl;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPatter(ReadPositiveNumber("Please enter a positive number:"));
}