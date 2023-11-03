//Using Dynamic Memory Allocation:
#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character() //Constructor is going to be defined rather than having a default one as marked below in line 21
	{
		Name = "Default Name";
		Health = 100.f;
	}
	string Name;
	float Health;
	void PrintHealth();
};

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Character* PtrToChar = new Character(); //pointer to struct allocated dynamic memory of size character, creates default constructor also
		//Note that this has been allocated memory on the heap rather than the stack
		PtrToChar->Name = "Neo";
		cout <<"Name = " << PtrToChar->Name << endl; //shows pointer works correctly
		PtrToChar->PrintHealth(); //shows constuctor works correctly
		delete PtrToChar; //frees space on the heap, technically only using a struct worth of space no matter how many iterations
		//*VERY IMPORTANT TO FREE SPACE TO AVOID DATA LEAKS*
	}

	system("pause");
	return 0;
}

void Character::PrintHealth()

{
	cout <<"Health = " << Health << endl << endl;
}