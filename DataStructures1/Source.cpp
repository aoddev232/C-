#include <iostream>
using namespace std;

enum PlayerStatus
{
	//          = 1 ...this automaticallty gives the next 2, the next 3 etc...
	PS_Crouched, 
	PS_Standing,
	PS_Walking,
	PS_Running
};
enum MovementStatus
{
	MS_Crouched,
	MS_Running //mistake! ...but there is a way to differentiate...line 41
};

//Function Prototypes:
void gap(void);

int main(void)
{
	//Part 1: Arrays (pretty much same as C)
	int myintarray[10];
	int myotherintarray[5] = { 1 , 23, 5, 4, 9 }; //initializing manually
	cout << myotherintarray[2] << endl;
	for (int i = 0; i < 10; i++) //initializing using a for loop
	{
		myintarray[i] = i;
		cout << "Position " << i << ": " << myintarray[i] << endl;
	}
	gap();

	//Part 2: Enumerations (see chapter 39 for any confusion...)
	PlayerStatus status; //create enum of type PlayerStatus
	status = PS_Crouched; //can take any of the above values or 'states'
	if (status == PS_Crouched)
	{
		cout << "The player is crouching" << endl;
	}


	MovementStatus mstatus;
	mstatus = MovementStatus::MS_Running; //use the :: operator to bring up menu, be sure to be using the right enums however!

	system("pause");
	return 0;
}
void gap(void)
{
	cout << "\n\n\n";
}