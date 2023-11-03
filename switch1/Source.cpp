#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

//Global Variables
const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

//Function Prototypes
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed); //takes enum as argument then uses global variables
void switchOnInt(int i);

int main(void)
{
	float MovementSpeed;
	PlayerStatus status = PS_Walking;

	//Part 1: Switch statement with enumerations
	UpdateMovementSpeed(status, MovementSpeed);
	cout << "MovementSpeed = " << MovementSpeed << endl;
	status = PS_Running;
	UpdateMovementSpeed(status, MovementSpeed);
	cout << "MovementSpeed = " << MovementSpeed << endl;
	status = PS_Crouching;
	UpdateMovementSpeed(status, MovementSpeed);
	cout << "MovementSpeed = " << MovementSpeed << endl << endl;

	//Part 2: Default case
	int i = 0;
	switchOnInt(i);
	i = 3;
	switchOnInt(i);

	system("pause");
	return 0;
}
//note that we feed the reference of the float otherwise it wouldn't be changed unless we replaced void with float for return which is messier...
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status) //switch is more efficient than multiple if else statements
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case PS_Crouching:
		speed = CrouchSpeed;
	}
}
void switchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your Number was zero. \n";
		break;
	case 1:
		cout << "Your Number was one. \n";
		break;
	case 2:
		cout << "Your Number was two. \n";
		break;
	default: //if there are no other cases...
		cout << "Your Number was not zero, one or two. \n";
	}
}