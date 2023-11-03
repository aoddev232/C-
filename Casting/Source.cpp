#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();

	void ObjectFunction()
	{
		cout << "ObjectFunction() called. \n\n";
	}
};
class Actor : public Object
{
public:
	virtual void BeginPlay() override;

	void ActorFunction()
	{
		cout << "ActorFunction() called. \n\n";
	}
};
class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction()
	{
		cout << "PawnFunction() called. \n\n";
	}
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
		//ObjectArray[i]->BeginPlay();
		
		Object* obj = ObjectArray[i]; //easier to use

		Actor* act = dynamic_cast<Actor*>(obj);//attempting to convert obj to Actor* and returns pointer, if fails returns null pointer
		if (act) //if it is a null pointer, this if statment will fail
		{
			act->ActorFunction();
		}
		else
		{
			cout << "Actor Failed. \n\n";
		}

		Pawn* pwn = dynamic_cast<Pawn*>(obj);
		if (pwn)
		{
			pwn->PawnFunction();
		}
		else
		{
			cout << "Pawn Failed. \n\n";
		}
		cout << endl;
	}
	//Note static_cast will automatically cast anything without running any tests, so be very careful using it.


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