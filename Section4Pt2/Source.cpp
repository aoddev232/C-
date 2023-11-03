//Working with Loops in C++
#include <iostream>
using namespace std;
int main()
{
	//Part 1: While Loops
	int MyInt(0);
	int count(0);
	while(count <= 10)
	{
		cout << MyInt << endl;
		MyInt++;
		count++;
	}

	//Part 2: Do While Loops
	double NumberPi = 3.14159;
	double NumberE = 2.718281828;
	bool Condition = true;
	count = 0;
	do
	{
		cout << "The number PI is: " << NumberPi << endl;
		cout << "The number E is: " << NumberE << endl;
		cout << "Count: " << count << endl;
		cout << "PI + E*count = " << NumberPi + NumberE * count << endl;
		cout << endl;

		count++;
		if (count <= 100)
		{
			Condition = true;
		}
		else
		{
			Condition = false;
		}
	} while (Condition);

	//Part 3: For Loops:
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			for (int k = 0; k <= 10; k++)
			{
				cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
			}
		}
	}
	//Triple For loop == 11x11x11 iterations in this case^^^

	system("pause");
	return 0;
}