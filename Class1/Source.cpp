#include <iostream>
#include <string>
using namespace std;

class Dog
{
public: //allows access to outside the class (structs public by default, classes private)

	Dog() //Constructor: Gets called as soon as a variable of type Dog is called:
	{
		Bark();
		//Default Data for when a dog is created:
		Name = "Default Name";
		Age = 10;
		Health = 100.f;
	}

	string Name;
	int Age;
	float Health;

	void Bark() //can contain functions also:
	{
		cout << "Woof! \n" << endl;
	}
};

class Cat
{
public:
	Cat(); //Constructor Defined outside of class this time
	string name;
	int age;
	float health;
	void Meow(); //also being defined outside the class this time
};

struct Cow
{
	Cow(); //Constructor
	int age;
	void moo();
};

int main(void)
{
	//Part 1:
	Dog doge;
	cout << doge.Name << endl;
	cout << doge.Age << endl;
	cout << doge.Health << endl << endl;
	//Now edit:
	doge.Name = "Rex";
	doge.Age = 14;
	doge.Health = 200.f;
	cout << doge.Name << endl;
	cout << doge.Age << endl;
	cout << doge.Health << endl << endl;

	Cat kat;
	cout << kat.name << endl;
	cout << kat.age << endl;
	cout << kat.health << endl << endl;

	//Part 2:
	//Structs work in very similar way in this case:
	Cow bull;
	cout << bull.age << endl;

	system("pause");
	return 0;
}

//Define Constructor Here:
Cat::Cat() //firstly fully qualify it's name then define
{
	Meow();
	name = "mittens";
	age = 5;
	health = 40.f;
}
void Cat::Meow() //firstly fully qualify it's name then define
{
	cout << "Meow! \n" << endl;
}

Cow::Cow()
{
	moo();
	age = 100;
}
void Cow::moo()
{
	cout << "MOO! \n" << endl;
}