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

bool CheckPerfectOrNot(int Number)
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

void IsPerfect(int Number)
{
	if (CheckPerfectOrNot(Number))
		cout << "Yes" << endl;
	else
		cout << "No";
}
int main()
{	
	IsPerfect(ReadPositiveNumber("Please enter a positive number:"));
}

