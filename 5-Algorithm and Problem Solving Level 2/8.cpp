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
//int CountFrequency(int Number)
//{
//	int Frequncy = 0;
//	for (int i = Number; i > 0; i--)
//	{
//		if(i == DigitsInNumber(i))
//	}
//}
int main()
{
	int Number = ReadPositiveNumber("Please enter a positive number:");
	int WantedNumber = ReadPositiveNumber("Please enter wanted positive number:");

	cout << "\nDigit " << WantedNumber << " Frequnecy is : " << CountFrequncyInInNumber(Number, WantedNumber) << "Time(s)";
	
}