#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char equipmntCde, duration;
	float rentalCost;

	cout << "To find the rental cost of an equipment, provide the following. \nEquipment Code !PROMOTION ON A, B & C!: ";
	cin >> equipmntCde;
	cout << "Full-Day or Half-day Rental (F/H): ";
	cin >> duration;


	if (equipmntCde == 'A' && duration == 'F')
	{
		rentalCost = 10.00;
	}
	else if (equipmntCde == 'A' && duration == 'H')
	{
		rentalCost = 15.00;
	}
	else if (equipmntCde == 'B' && duration == 'F')
	{
		rentalCost = 20.00;
	}
	else if (equipmntCde == 'B' && duration == 'H')
	{
		rentalCost = 35.00;
	}
	else if (equipmntCde == 'C' && duration == 'F')
	{
		rentalCost = 45.00;
	}
	else if (equipmntCde == 'C' && duration == 'H')
	{
		rentalCost = 40.00;
	}
	else
	{
		rentalCost = 50.00;
	}

	cout << endl << fixed << setprecision(2) << "Rental Cost: $" << rentalCost;
}