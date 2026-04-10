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

void PrintInvertedPatter(int number)
{
	cout << endl;
	for (int i = number; i > 0; i--)
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
	PrintInvertedPatter(ReadPositiveNumber("Please enter a positive number:"));
}