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

void PrintLetterPatter(int number)
{
	cout << endl;
	int AsciiValue = 65;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << char(AsciiValue);
		}
		AsciiValue++;
		cout << endl;
	}
}

int main()
{
	PrintLetterPatter(ReadPositiveNumber("Please enter a positive number:"));
}