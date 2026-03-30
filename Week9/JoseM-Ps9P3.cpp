#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float computeMpg(float milesTravel, float galUsed) {
	float tripMpg;

	tripMpg = (float)milesTravel / galUsed;

	return tripMpg;
}

float computeGasCost(float galused) {
	float $ofGas = galused * 3.5;

	return $ofGas;
}

int main() {
	string destCity;
	float milesTravel, galUsed, tripMpg, $ofGas;
	float tot$ofGas = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "City being travelled to: ";
	getline(cin, destCity);
	cout << "Miles Travelled: ";
	cin >> milesTravel;
	cout << "Gallons of Gas used: ";
	cin >> galUsed;

	while (!cin.eof())
	{
		tripMpg = computeMpg(milesTravel, galUsed);
		$ofGas = computeGasCost(galUsed);

		tot$ofGas = tot$ofGas + $ofGas;

		cout << fixed << setprecision(2);
		cout << "\nTrip to " << destCity << " average around " << tripMpg << " mpg and cost $" << $ofGas << " in fuel" << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "City being travelled to: ";
		cin.ignore();
		getline(cin, destCity);
		cout << "Miles Travelled: ";
		cin >> milesTravel;
		cout << "Gallons of Gas used: ";
		cin >> galUsed;
	}
	cout << "\n\nThe total cost of gas for all the trips is $" << tot$ofGas << endl;
	system("pause");

	return 0;
}