#include <iostream>
using namespace std;

class Object
{
public:
	virtual void beginplay(); //we can override the defintion of a virtual function in child classes
};

class Actor : public Object
{
public:
	//also inherits Objects beginplay(), see line 52!
	virtual void beginplay() override; //dosn't need virtual/override written in this line, but is good practice for larger projects
};

class Pawn : public Actor
{
public:
	//also inherits Actors and Objects beginplay()!, see line 57!
	virtual void beginplay() override;
};

int main(void)
{
	//Create Classes:
	Object* obj = new Object;
	obj->beginplay();
	cout << endl;
	Actor* act = new Actor;
	act->beginplay();
	cout << endl;
	Pawn* pawn = new Pawn;
	pawn->beginplay();
	cout << endl;

	//Very Important do delete dynamicly allocated memory when done!
	delete obj;
	delete act;
	delete pawn;
	system("pause");
	return 0;
}

void Object::beginplay()
{
	cout << "Object BeginPlay() called. \n";
}
void Actor::beginplay()
{
	cout << "Actor BeginPlayed() called. \n";
	Object::beginplay(); //we can access the parents definition by fully qualifying the name
}
void Pawn::beginplay()
{
	cout << "Pawn BeginPlayed() called. \n";
	Actor::beginplay(); //be careful of the inheritance chain!
}