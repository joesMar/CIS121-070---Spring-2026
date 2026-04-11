#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void computeOrderCost(int quantity, float itemCost, float& extendedPrice) {
	extendedPrice = quantity * itemCost;
}

int main() {
	string groceryItem;
	int quantity;
	float itemCost, extendedPrice, tax, total;
	float subtotal = 0.0f;
	ifstream infile;

	infile.open("Ps11P2Grocery.txt");

	while (!infile.eof()) 
	{
		infile >> groceryItem >> quantity >> itemCost;

		computeOrderCost(quantity, itemCost, extendedPrice);

		subtotal = subtotal + extendedPrice;

		cout << fixed << setprecision(2);
		cout << endl << groceryItem << "($" << itemCost << ")	" << quantity << "x		$" << extendedPrice << endl;
	}
	infile.close();

	system("pause");

	tax = subtotal * 0.07f;
	total = subtotal + tax;

	cout << "\n	SUBTOTAL		$" << subtotal << "\n	TAX			$" << tax << "\n	TOTAL			$" << total << endl;
	system("pause");

	return 0;
}