#include <iostream>
using namespace std;

void PrintHeaderTable()
{
	cout << "\n\n\t\t Muliplication Table From 1 to 10\n"<< endl<<"\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n_________________________________________________________________________" << endl;

}

string ColumnSeparator(int i)
{
	if (i < 10)
		return "  |";
	else
		return " |";
}

void PrintMulitplicationTable()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSeparator(i) << "\t";

		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{	
	PrintHeaderTable();
	PrintMulitplicationTable();
}

