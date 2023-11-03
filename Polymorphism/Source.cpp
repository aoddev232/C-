#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();
};
class Actor : public Object
{
public:
	virtual void BeginPlay() override;

};
class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main(void)
{
	//With polymorphism, pointers to parent classes can also point to child classes using inheritance
	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;
	
	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };
	for (int i = 0; i < 3; i++)
	{
		//However, it will always access the correct object it's being pointed to 
		ObjectArray[i]->BeginPlay();
	}

	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
	system("pause");
	return 0;
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called. \n\n";
}
void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called. \n\n";
}
void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called. \n\n";
}