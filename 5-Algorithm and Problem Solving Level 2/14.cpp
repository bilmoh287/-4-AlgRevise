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

void PrintInvertedLetterPatter(int number)
{
	cout << endl;
	int AsciiValue = 64 + number;
	for (int i = number; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << char(AsciiValue);
		}
		AsciiValue--;
		cout << endl;
	}
}

int main()
{
	PrintInvertedLetterPatter(ReadPositiveNumber("Please enter a positive number:"));
}