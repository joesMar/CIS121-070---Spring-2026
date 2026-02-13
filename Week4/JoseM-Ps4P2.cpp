#include <iostream>
using namespace std;

int main()
{
	string item;
	int quantity;

	cout << "User, please select either item A or item B?" << endl << "A or B?: ";
	cin >> item;

	float unit$;
	if (item == "A" || item == "a")
	{
		unit$ = 10;
	}
	else if (item == "B" || item == "b")
	{
		unit$ = 20;
	}
	else
	{
		cout << "INVALID ITEM!";
		return 0;
	}
	
	cout << "What is the quantity for item " << item << ": ";
	cin >> quantity;

	float extended$ = quantity * unit$;
	cout << "The price per unit for item " << item << " is $" << unit$ << endl << "The extended price would be $" << extended$;
}