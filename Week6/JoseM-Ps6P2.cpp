#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int partNum, quantity;

	cout << "To find the total cost for a certain amount of one part, provide the following. \nPart# (10, 99, 55, 70, 50): ";
	cin >> partNum;
	cout << "Quantity: ";
	cin >> quantity;

	float $perUnit;

	if (partNum == 10 && quantity > 1000) 
	{
		$perUnit = 1.00;
	}
	else if (partNum == 99 && quantity > 500)
	{
		$perUnit = 2.00;
	}
	else if (partNum == 10 || partNum == 99 || partNum == 55 || partNum == 70 || partNum == 50 )
	{
		$perUnit = 5.00;
	}
	else
	{
		cout << "\nInvalid Part#\n";
		return 0;
	}

	float Total = quantity * $perUnit;

	cout << endl << "Part#: " << partNum << endl << fixed << setprecision(2) << "Cost per Unit: $" << $perUnit << endl << "Total: $" << Total;
}