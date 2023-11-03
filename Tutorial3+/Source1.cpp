#include <iostream>
using namespace std;
int a = 10; //global variable with global scope

int MyFunction(int Param_one, int Param_two) //Functions...seem to work the same as C...
{
	//note color grey represents as function parameters^^^
	int local_variable;
	local_variable = Param_one + Param_two;
	cout << "The local variable is: " << local_variable << endl;
	return local_variable;
}
void welcome()
{
	cout << "Welcome! \n";
}
void printNumber(int numToPrint)
{
	cout << numToPrint << endl;
}
int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int main()
{
	//Part 1:
	int b = 5;
	cout << b << endl;
	{
		int c = 1;
		cout << c << endl; //local variable with local scope (only within this block of code)
	}
	cout << a << endl;

	//Part 2:
	cout << "\nPart 2:\n"; //make some space and run tests for fucntions:
	int var_in_main = MyFunction(2, 3);
	int another_var = MyFunction(var_in_main, 4);
	MyFunction(var_in_main, another_var);

	//Part 3:
	cout << "\nPart 3:\n";
	welcome();
	printNumber(4);
	int x;
	x = add(a, b);
	printNumber(x);

	system("pause");
	return 0;
}