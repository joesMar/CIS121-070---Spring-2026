#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quantity;

	cout << "Enter the quantity of the item: ";
	cin >> quantity;

	float unit$;
	if (quantity >= 1000)
	{
		unit$ = 3;
	}
	else
	{
		unit$ = 5;
	}
	
	float extended$ = quantity * unit$;
	float tax = extended$ * 0.07;
	float total = extended$ + tax;

	cout << "For " << quantity << " units, the price for each unit would be $" << fixed << setprecision(2) << unit$ << "." << endl 
		<< "The extended price would turn out to be $" << fixed << setprecision(2) <<extended$ << " and have a tax of $" 
		<< fixed << setprecision(2) << tax << ", resulting with the total of $" << fixed << setprecision(2) <<total;
}