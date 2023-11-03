#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;

	int x;
	int y;
	int z;
};

int main(void)
{
	//Part 1:
	int a = 100;
	int* aPtr; //integer pointer
	aPtr = &a; //points to address of a

	cout << aPtr << endl; //prints address in hexadecimal
	cout << *aPtr << endl; //dereferenced

	int b = 50;
	aPtr = &b; //change what it points to...
	cout << *aPtr << endl << endl;

	//Part 2:
	int numbers[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int* numptr = numbers; //points to first address in array as they are next to each other in memory(arrays)
	cout << *numptr << endl;
	numptr++; //pointer nontation for incrementing which element it points to ^^^
	cout << *numptr << endl;
	numptr += 3;
	cout << *numptr << endl << endl;

	//Part 3:
	Container container = { "Sam", 5, 6, 7 };
	Container* ptrcon = &container; //pointer to structure
	cout << (*ptrcon).Name << endl; //order of precedence as it would try evaluate .Name first as it goes from right to left(ugly formatting)
	//alternative tidy format: SYNTACTIC SUGAR
	cout << ptrcon->Name << endl;

	system("pause");
	return 0;
}