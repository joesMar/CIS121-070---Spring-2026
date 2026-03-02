#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int quantity;
	char customerStatus;

	cout << "To determine the total for requested amount of widgets, please provide the following. \nQuantity of Widgets: ";
	cin >> quantity;
	cout << "Customer Status (A,B,C,D): ";
	cin >> customerStatus;

	float price;

	if (quantity > 10000 && customerStatus == 'A')
	{
		price = 10.00;
	}
	else if (quantity > 10000 && customerStatus == 'B') 
	{
		price = 12.00;
	}
	else if (quantity >= 5000 && customerStatus == 'C') 
	{
		price = 20.00;
	}
	else if (quantity >= 5000 && customerStatus == 'D') 
	{
		price = 22.00;
	}
	else if (quantity < 5000 && customerStatus == 'A' || customerStatus == 'B' || customerStatus == 'C' || customerStatus == 'D')
	{
		price = 30.00;
	}
	else
	{
		cout << "\nInvalid Status\n";
		return 0;
	}

	float extended$ = quantity * price;
	float tax = extended$ * 0.07;
	float Total = extended$ + tax;

	cout << fixed << setprecision(2) << endl << "Extedned Price: $" << extended$ << endl << "Tax Amount: $" << tax << endl << "Total: $" << Total;
}