#include <iostream>
using namespace std;

//Part 1:
void AddToCount()
{
	static int count = 0;
	//static var located in different section of memory, has main function scope, but still can't access outside of function...
	count++;
	cout << count << endl;
}

//Part 2:
class Item
{
public:
	Item()
	{
		cout << "An item has been created! \n";
	}
	~Item()
	{
		cout << "An item has been destroyed! \n";
	}
};

//Part 3 & 4:
class Critter
{
public:
	Critter()
	{
		cout << "A Critter is born! \n";
		++CritterCount; //3...kind of like a global variable but for this class
	}
	static void AnnounceCount() //4
	{
		cout << CritterCount << endl;
	}
	static int CritterCount; //must be initialized outside of class, see line 42
};
int Critter::CritterCount = 0;

int main(void)
{
	//Part 1: Static Variables in Functions
	for (int i = 0; i < 10; i++)
	{
		AddToCount();
	}
	cout << endl;

	//Part 2: Using the keyword for different scopes
	{
		Item item; //this variable only has scope within these brackets...therfore destructor is called after these brackets
	}
	cout << endl;
	{
		static Item item2; //whereas the static variable exists elsewhere and has main function scope, destructor called after system pause
	}
	cout << endl;

	//Part 3: Variables inside of classes
	//Part 4: Static Functions inside of classes
	Critter::CritterCount = 13; //is accessible this way, fully qualify name to specify to c++
	Critter::AnnounceCount();
	Critter crit;
	Critter::AnnounceCount();;
	Critter crit2;
	Critter::AnnounceCount();
	//note don't actually need there to be Critters to use the static functions/variables!
	Critter* crit3 = new Critter;
	Critter::AnnounceCount();
	delete crit3;

	system("pause");
	return 0;
}