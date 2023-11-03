#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	//Constructors
	Animal();
	Animal(string name, int age, int num_limbs); //constructor overload
	//Data:
	string Name;
	int Age;
	int numOfLimbs;
	//Functions:
	void Report();
};

//Derived class from Animal (parent = animal and child = dog):
class Dog : public Animal //Dog inherents everything from Animal class^^^
{
public:
	//Custom Constructor:
	Dog();
	//Constructor Overload:
	Dog(string name, int age, int num_limbs);
	void Speak(); //not inherited!
};

class Corgi : public Dog //inherents all of dogs traits as well as animals traits
{
public:

};

int main(void)
{
	Animal animal;
	animal.Report();
	Animal animal2("Cheetah", 7, 4);

	//Dog dog1;
	Dog dog2("Spot", 4, 5); //What Happened Here:
	//Animal() -> Dog(name,age,num_limbs) -> Animal(name,age,num_limbs) -> Which then reports()
	dog2.Speak();

	Corgi corgi;
	//By default if no constructors definer: Animal() -> Dog()
	corgi.Speak();
	corgi.Report();

	system("pause");
	return 0;
}
Animal::Animal()
{
	cout << "An ANIMAL is born!\n";
	//Default Data given in constructor:
	Name = "Default";
	Age = 2;
	numOfLimbs = 4;
}
Animal::Animal(string name, int age, int num_limbs)
	: Name(name), Age(age), numOfLimbs(num_limbs)
{
	//Name = name;
	//Age = age;
	//numOfLimbs = num_limbs;
	Report();
}
void Animal::Report()
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Number of limbs: " << numOfLimbs << endl << endl;
}
Dog::Dog()
{
	//Parent Constructor is called first!
	cout << "A Dog is born!" << endl;
}
Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs) //Arguments in this direction -> ***INITIALIZER LIST TO DETERMINE WHICH CONSTRUTOR GETS CALLED***
{
	//Animal(name, age, num_limbs);
}//This is how to not get Animal() default contructor called***
void Dog::Speak()
{
	cout << "Woof!\n";
}