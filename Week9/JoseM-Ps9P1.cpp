#include <iostream>
#include <iomanip>
using namespace std;

float computeTotal(int quantity, float price) {
	float total = quantity * price;

	return total;
}

float computeDiscounts(float total) {
	float discount, discountedTot;

	if (total > 10000)
	{
		discount = total * .1;
	}
	else
	{
		discount = total * .05;
	}

	discountedTot = total - discount;

	return discountedTot;
}

int main() {
	int quantity;
	float price, total, discountedTot;
	float sumTotals = 0, sumDiscountedTot = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Quantity: ";
	cin >> quantity;
	cout << "Price: $";
	cin >> price;

	while (!cin.eof())
	{
		total = computeTotal(quantity, price);
		discountedTot = computeDiscounts(total);

		sumTotals = sumTotals + total;
		sumDiscountedTot = sumDiscountedTot + discountedTot;

		cout << fixed << setprecision(2);
		cout << "\nEntry Total: $" << total << "\nEntry Discounted Total: $" << discountedTot << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Quantity: ";
		cin >> quantity;
		cout << "Price: $";
		cin >> price;
	}

	cout << "\n\nThe sum for all entry totals: $" << sumTotals << "\nThe sum for all entry discounted totals: $" << sumDiscountedTot << endl;
	system("pause");

	return 0;
}