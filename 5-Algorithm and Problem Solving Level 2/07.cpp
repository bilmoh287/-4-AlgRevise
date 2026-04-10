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

int ReverseNumber(int Number)
{

	int reminder = 0;
	int Number2 = 0;
	while (Number > 0)
	{
		reminder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + reminder;
	}

	return Number2;
}

int main()
{	
	cout <<"\nReverse Number is :"
		<< ReverseNumber(ReadPositiveNumber("Please enter a positive number:"));
	
}