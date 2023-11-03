//Working with References and some Strings
//References are a very powerful tool, kind of like pointers but are a bit different.
//A reference id sn alias for an already existing variable. It cannot be chaged to reference something else.
//A pointer points to a memory location of 'a' by storing its address in another memory location. An alias in this case is basically just a synonym.
#include <iostream>
#include <string>
using namespace std;
//Function Prototypes:
void  ChangeString(string& str);
int main()
{
	//Part 1:
	string mystring = "Druid";
	//create a string reference to mystring
	string& myref = mystring;
	cout << mystring << endl;
	cout << myref << endl;
	
	myref += " Mechanics"; //This is altering the same place in memory as line 10^^^
	cout << mystring << endl;
	cout << myref << endl;

	//Part 2:
	string myStr = "Druid";
	ChangeString(myStr); //basically passing in the address directly(by reference), so change is made
	cout << endl << myStr << endl << endl;

	//Part 3: Testing:
	string teststring = "test";
	string& testref = teststring;
	cout << teststring << endl;
	cout << testref << endl;
	ChangeString(testref);
	cout << teststring << endl;
	cout << testref << endl;

	system("pause");
	return 0;
}
void ChangeString(string& str) //can only accept a string reference data type, cant take an actual string eg ChangeString("string");
{
	str += "!";
}