#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
	float x;
	float y;
	float z;
};
struct Player
{
	int Level;
	float Health;
	float Damage;
	float Stamina;

	LocationVector Location = { 0.f, 0.f,0.f }; //struct witin struct

	void TakeDamage(float dmg) //functions withing structs
	{
		Health -= dmg;
	}
	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "Level is greater than 10! \n";
		}
		return Level;
	}
	void DisplayLocation()
	{
		cout << "Co-ordinates: \n";
		cout << Location.x << endl;
		cout << Location.y << endl;
		cout << Location.z << endl << endl;
	}
};
int main(void)
{
	Player p1;
	p1.Level = 11;
	p1.Health = 100.f;
	p1.Damage = 10.f;
	p1.Stamina = 20.f;

	cout << "p1 Level = " << p1.GetLevel() << endl << endl;

	p1.TakeDamage(40.f);
	cout << "p1 takes " << 40.f << " damage!" << endl;
	cout << "p1 Health = " << p1.Health << endl << endl;

	p1.DisplayLocation();

	Player p2 = { 1, 50.f, 40.f, 35.54f, {35.5f, 67.45f, 100.003f} }; //initializing something like this on one line^^^
	p2.DisplayLocation();

	system("pause");
	return 0;
}