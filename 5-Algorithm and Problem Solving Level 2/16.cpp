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

void PrintAllWords()
{
	int AsciiValue = 65;
	for (int i= 0; i <= 25; i++)
	{
		for (int j = 0; j <= 25;j++)
		{
			for (int k = 0; k <= 25; k++)
			{
				cout << char(AsciiValue + i);
				cout << char(AsciiValue + j);
				cout << char(AsciiValue + k);

				cout << endl;

			}
		}
	}
}

void printAllThreeLetterCombinations()
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int k = 'A'; k <= 'Z'; k++)
			{
				cout << char(i);
				cout << char(j);
				cout << char(k);
				cout << endl;
			}
		}
	}
}


int main()
{
	printAllThreeLetterCombinations();
}