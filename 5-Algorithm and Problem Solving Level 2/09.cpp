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

int CountFrequncyInInNumber(int Number, int WanteNumber)
{
	int Frequncy = 0;
	int reminder = 0;
	while (Number > 0)
	{
		reminder = Number % 10;
		Number /= 10;
		
		if (reminder == WanteNumber)
			Frequncy++;
	}
	return Frequncy;
}


void PrintEachDigitFrequency(int Number)
{
	cout << endl;
	for (int i = 0; i < 10;i++)
	{
		int Freqeuncy = CountFrequncyInInNumber(Number, i);
		if (Freqeuncy > 0)
		{
			cout << "\nDigit " << i << " Frequnecy is : " << Freqeuncy << " Time(s)" << endl;
		}
	}

}
int main()
{
	int Number = ReadPositiveNumber("Please enter a positive number:");
	PrintEachDigitFrequency(Number);
	
}