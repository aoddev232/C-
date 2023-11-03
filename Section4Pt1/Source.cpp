#include <iostream>
using namespace std;
//Function Prototypes:
void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void AskYesNoQuestion();

int main(void)
{
	//Part 1: Function Work
	AskYesNoQuestion();

	//Part 2: Incrementation and Arithmetic work
	int i = 3;
	i *= 3;
	cout << i << endl;
	float j = 2.0;
	float k = i / j;
	cout << k << endl;
	//Keep in Mind that k is being stored in float here...if it was int answer would lose data^^^
	int x = 3;
	cout << x++ << endl; //incremented AFTER this line of code...
	cout << x << "\n" << endl; //x is now 4 in this line

	int a = 3;
	int b = ++a; //both have been altered in this line of code
	cout << a << endl;
	cout << b << endl;


	system("pause");
	return 0;
}

//Function Definitions:
void welcome()
{
	cout << "Welcome!\n" << endl;
}

char getYesNo()
{
	//Note the << and >> is the flow/direction of in which data is going...
	cout << "Please answer y or n.\n";
	char response;
	cin >> response;
	return response;
}

void printResponse(char responseToPrint)
{
	cout << "Your answer was: " << responseToPrint << endl;
}

void AskYesNoQuestion() //All of the above functions wrapped up into one for efficiency: Refactoring
{
	welcome();
	char answer = getYesNo();
	printResponse(answer);
}