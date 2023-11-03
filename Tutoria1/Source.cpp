//First Lecture(s) for learning c++ with game development:
#include <iostream>
using namespace std; //anything in std namespace dosnt have to be prefixed with std::, see line 14. [similar functionality to libraries?]

int main(void)
{
	//Part 1:
	char mycharacter;
	mycharacter = 'y'; //single quotes represent a character, double represents string [same as C]
	int myint;
	myint = 13;

	//std::cout << "You Died!\n"; == pre line 3 way of doing this
	cout << mycharacter << endl; //cout << mycharacter << "\n";
	//<< is the shift operator and then the append operator in this case?^^^
	cout << myint << endl;
	mycharacter = 'n'; //overwriting value, just like in C

	//Part 2:
	int a(1); //different way of assigning
	int b = 13;
	if (b < a)
	{
		cout << "b is less than a." << endl;
	}
	else if (a < b)
	{
		cout << "b is not less than a." << endl;
	}
	else if (a == b)
	{
		cout << "a is equal to b." << endl;
	}
	else
	{
		cout << "a is neither greater than, less than or equal to b." << endl;
	}

	system("pause");
	return 0; //good programming practice as in C
}