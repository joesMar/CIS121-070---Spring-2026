#include <iostream>
#include <iomanip>
using namespace std;

float computeUnitPrice(char prodCode) {
	float unitPrice;

	if (prodCode == 'W')
	{
		unitPrice = 10.00;
	}
	else if (prodCode == 'C')
	{
		unitPrice = 15.00;
	}
	else if (prodCode == 'G')
	{
		unitPrice = 20.00;
	}
	else
	{
		cout << "INVALID PRODUCT CODE";
		return 0;
	}

	return unitPrice;
}

float computeShipping(char prodCode) {
	float shippingCost;

	if (prodCode == 'W')
	{
		shippingCost = 2.00;
	}
	else if (prodCode == 'C')
	{
		shippingCost = 5.00;
	}
	else if (prodCode == 'G')
	{
		shippingCost = 7.00;
	}
	else
	{
		return 0;
	}

	return shippingCost;
}

int main() {
	char prodCode;
	int quantity;
	float unitPrice, shippingCost, extendedPrice, total;
	float allEntrTotal = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Product Code (W, C, G): ";
	cin >> prodCode;
	cout << "Quantity: ";
	cin >> quantity;

	while (!cin.eof())
	{
		unitPrice = computeUnitPrice(prodCode);
		shippingCost = computeShipping(prodCode);

		extendedPrice = quantity * unitPrice;
		total = extendedPrice + shippingCost;

		allEntrTotal = allEntrTotal + total;

		cout << fixed << setprecision(2);
		cout << "\nThe unit price for product " << prodCode << " is $" << unitPrice
			<< ".\nThe extended price would come out as $" << extendedPrice << " and with additional shipping fee of $" << shippingCost 
			<< ", \nresults in a total that would be $" << total << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Product Code (W, C, G): ";
		cin >> prodCode;
		cout << "Quantity: ";
		cin >> quantity;
	}

	cout << "\n\nThe sum for the totals of all entries are $" << allEntrTotal << endl;
	system("pause");

	return 0;
}