#include <iostream>
#include <string>
using namespace std;

class Creature
{
public: 
	Creature(); //Constructor

	void SetName(string name); //Setter Function
	string GetName(); //Getter Function
	float GetHealth();
	void TakeDamage(float damage);
private:
	string Name;
	float Health;
protected: //Only Available through public functions or in child classes
	int NumberOfLimbs;
};
//Derived Child Class:
class Goblin : public Creature
{
public:
	Goblin(); //Constructor
	int GetNumberOfLimbs(); //Accesser Function
};

int main(void)
{
	Creature Igor;
	//Igor.Name = Igor ERROR as it is PRIVATE!
	Igor.SetName("Igor");
	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;
	cout << "Igor will now take 35 damage" << endl;
	Igor.TakeDamage(35.0);

	Goblin Gobby;
	cout << Gobby.GetName() << endl;
	cout << Gobby.GetNumberOfLimbs() << endl << endl;
	//Need Accesser Function to access number of limbs as it is a protected variable

	//Test: Passed
	cout << "Igor will now take 100 fall danage" << endl;
	Igor.TakeDamage(100.0);

	//Test: Passed
	cout << "Name: " << Gobby.GetName() << endl;
	cout << "Health: " << Gobby.GetHealth() << endl;
	cout << "Gobby will now take 99 fall damage" << endl;
	Gobby.TakeDamage(99.0);

	system("pause");
	return 0;
}

Creature::Creature()
{
	cout << "A creature has been created!\n";
	Health = 100.f;
}

void Creature::SetName(string name)
{
	Name = name;
	//Health = 100.f; -> position modified by me
}
string Creature::GetName()
{
	return Name;
}
float Creature::GetHealth()
{
	return Health;
}
void Creature::TakeDamage(float damage)
{
	float total;
	total = Health - damage;
	if (total <= 0.f)
	{
		cout << GetName() << " has died!\n";
	}
	Health -= damage;
	cout << "Health: " << Health << endl << endl;
	//modified by me^^^
}
Goblin::Goblin()
{
	NumberOfLimbs = 4; //no errors! inherited access to protected variables
	SetName("Gobby");
}
int Goblin::GetNumberOfLimbs()
{
	return NumberOfLimbs;
}