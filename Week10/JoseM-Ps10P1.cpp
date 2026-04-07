#include <iostream>
#include <iomanip>
using namespace std;

void computeTotal(int quantity, float unitPrice, float& subtotal, float& tax, float& total) {
	subtotal = quantity * unitPrice;
	tax = subtotal * 0.07f;
	total = subtotal + tax;
}

int main() {
	int quantity;
	float unitPrice, subtotal, tax, total;
	float subtotalSum = 0.0f, taxSum = 0.0f;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Quantity: ";
	cin >> quantity;
	cout << "Unit Price: $";
	cin >> unitPrice;

	while (!cin.eof())
	{
		computeTotal(quantity, unitPrice, subtotal, tax, total);

		subtotalSum = subtotalSum + subtotal;
		taxSum = taxSum + tax;

		cout << fixed << setprecision(2);
		cout << "\n[Subtotal]	$" << subtotal << "\n[Tax]		$" << tax << "\n[Total]		$" << total << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Quantity: ";
		cin >> quantity;
		cout << "Unit Price: $";
		cin >> unitPrice;
	}

	cout << "\n\nThe sum of all entries subtotal is $"<< subtotalSum << endl;
	cout << "The sum of all entries tax is $" << subtotalSum << endl;
	system("pause");

	return 0;
}