#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature(); //Constructor

	void SetName(string name); //Setter Function for Name
	string GetName(); //Getter Function for Name
	float GetHealth(); //Getter Function for Health
	void TakeDamage(float damage); //Function to change health(private)

private:
	string Name;
	float Health;
};

int main(void)
{
	Creature Igor;
	//Igor.Name = "Igor" ERROR -> PRIVATE
	Igor.SetName("Igor");
	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;
	//Why? -> Better Practice for Sensitive Data

	system("pause");
	return 0;
}

//Definitions:
Creature::Creature()
{
	Health = 100.f;
	cout << "A creature has been created!\n";
}
void Creature::SetName(string name)
{
	Name = name;
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
	float Total;
	Total = Health - damage;
	if (Total <= 0.f)
	{
		cout << GetName << " has died!\n";
	}
	else
	{
		Health -= damage;
	}
	cout << "Health: " << GetHealth << endl;
}