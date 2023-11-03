#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	switch (x) //testing grouping switch statement cases together
	{
	case 0:
	case 1:
	case 2:
		cout << "x is less than 3" << endl;
		break;
	default:
		cout << "x is more than or equal to 3" << endl;
		break;
	}

	system("pause");
	return 0;
}