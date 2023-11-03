#include <iostream>
using namespace std;

class Character
{
public:
	Character();
	~Character();

	int* Age;
	float* Health;
};

int main(void)
{
	Character* Char = new Character;
	delete Char;

	system("pause");
	return 0;
}

Character::Character()
{
	cout << "A new character was created. \n";
	//Dynamically Alloacated on the heap
	Age = new int(1);
	Health = new float(100.f);
}
Character::~Character()
{
	cout << "Character Destroyed. \n";
	//Important to Delete memory on the heap to avoid data leaks
	delete Age;
	delete Health;
}