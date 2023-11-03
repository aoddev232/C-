#include <iostream>
#include <string>
using namespace std;
void CanPassLiteralsAndRefs(const int& num);
int main(void)
{
	//Part 1: Examples
	string first = "Allen";
	string last = "Jones";
	string full = first + " " + last;
	cout << full << endl;
	string pet("Spot");
	string space(" ");
	string PetFullName = "Pet: ";
	PetFullName += pet;
	PetFullName += (space + last);
	cout << PetFullName << endl;

	//Part 2: Constants (cannot change value)
	const float PI = 3.14159; //PI++ == ERROR!
	int b = 5;
	CanPassLiteralsAndRefs(b);
	CanPassLiteralsAndRefs(3);
	
	system("pause");
	return 0;
}
void CanPassLiteralsAndRefs(const int& num) //using the const functionality allowd it to take literals as arguments as well***
{
	cout << num << endl;
	//note we still cannot actually change the value of these constants
}