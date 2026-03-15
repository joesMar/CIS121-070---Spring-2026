#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float computeMpg(float milesTravel, float galUsed) {
	float tripMpg;

	tripMpg = (float)milesTravel / galUsed;

	return tripMpg;
}

int main() {
	string destCity;
	float milesTravel, galUsed, tripMpg;
	float totMiles = 0;
	int numTrips = 0;

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

		totMiles = totMiles + milesTravel;
		++numTrips;

		cout << fixed << setprecision(2);
		cout << "\nTrip to " << destCity << " average around " << tripMpg << " mpg." << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Next city being travelled to: ";
		cin >> destCity;
		cout << "Miles Travelled: ";
		cin >> milesTravel;
		cout << "Gallons of Gas used: ";
		cin >> galUsed;
	}

	cout << "\n\nTotal miles traveled: " << totMiles << endl;
	cout << "Number of trips taken: " << numTrips << endl;
	system("pause");

	return 0;
}