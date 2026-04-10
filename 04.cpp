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

void PrintAllPerfectNumber(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}
int main()
{	
	PrintAllPerfectNumber(ReadPositiveNumber("Please enter a positive number:"));
}

