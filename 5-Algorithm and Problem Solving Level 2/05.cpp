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

bool IsPerfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			sum += i;
		}
	}

	return Number == sum;
}

void PrintDigits(int Number)
{
	//for (Number; Number >= 0; Number--)
	//{
	//	cout << Number << endl;
	//}
	//string NumString = to_string(Number);
	//for (int i = NumString.length(); i >= 0; i--)
	//{
	//	cout << NumString[i] << endl;
	//}
	int reminder = 0;
	while (Number > 0)
	{
		reminder = Number % 10;
		Number /= 10;
		cout << reminder << endl;
	}
}
int main()
{	
	PrintDigits(ReadPositiveNumber("Please enter a positive number:"));
	
}

