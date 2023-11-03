//Function Overloading:
#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);

int main(void)
{
	int x = 5;
	string mystring = "This is my String";

	Print("Hello World!");
	Print(3);
	Print("My String 1!", "My String 2!");
	Print(x, mystring);

	system("pause");
}
void Print(string str)
{
	cout << str << endl;
}
void Print(int i)
{
	cout << i << endl;
}
void Print(string str1, string str2)
{
	cout << str1 << endl << str2 << endl;
}
void Print(int i, string str)
{
	cout << "Integer Value: " << i << endl;
	cout << "String Value: " << str << endl;
}