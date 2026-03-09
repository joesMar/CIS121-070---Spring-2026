#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int quantity;
	float pricePer;
	float extndd$, discountAmnt, entry$;
	float totentry$ = 0;

	cout << "Provide the quantity (Enter ctl+z to stop)\nQuantity: ";
	cin >> quantity;
	cout << "Price per unit (Enter ctl+z to stop)\nPrice: $";
	cin >> pricePer;


	while (!cin.eof())
	{
		extndd$ = quantity * pricePer;

		if (quantity > 1000)
		{
			discountAmnt = extndd$ * .10;
		}
		else
		{
			discountAmnt = 0;
		}

		entry$ = extndd$ - discountAmnt;
		totentry$ = totentry$ + entry$;

		cout << fixed << setprecision(2);
		cout << "\nQuantity: " << quantity << endl;
		cout << "Price per unit: $" << pricePer << endl;
		cout << "Extended price: $" << extndd$ << endl;
		cout << "Discounted amount: $" << discountAmnt << endl;
		cout << "Discounted Price: $" << entry$ << endl << endl;

		system("pause");

		cout << "\nProvide the next quantity (Enter ctl+z to stop)\nQuantity: ";
		cin >> quantity;
		cout << "Price per unit (Enter ctl+z to stop)\nPrice: $";
		cin >> pricePer;
	}

	cout << "\n\nTotal price for all entries: $" << totentry$ << endl;
	system("pause");

}