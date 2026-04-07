#include <iostream>
#include <iomanip>
using namespace std;

void computePackageCost(float packageWeight, int zipCode, float& areaCharge, float& weightCharge, float& postage) {
	if (zipCode == 60171)
	{
		areaCharge = 2.00f;
	}
		else if (zipCode == 60172)
		{
			areaCharge = 2.50f;
		}
		else if (zipCode == 60635)
		{
			areaCharge = 3.00f;
		}
		else
		{
			areaCharge = 5.00f;
		}

	if (packageWeight > 100)
	{
		weightCharge = packageWeight * 0.02f;
	}
		else if (packageWeight > 50)
		{
			weightCharge = packageWeight * 0.03f;
		}
		else
		{
			weightCharge = packageWeight * 0.05f;
		}

	postage = areaCharge + weightCharge;
}

int main() {
	int zipCode;
	float packageWeight, areaCharge, weightCharge, postage;
	int numofPackages = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Package Weight: ";
	cin >> packageWeight;
	cout << "Zip Code: ";
	cin >> zipCode;

	while (!cin.eof())
	{
		computePackageCost(packageWeight, zipCode, areaCharge, weightCharge, postage);

		numofPackages++;

		cout << fixed << setprecision(2);
		cout << "\n[Area Charge]	[Weight Charge]		[Postage]";
		cout << "\n$" << areaCharge << "		$" << weightCharge << "			$" << postage << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Package Weight: ";
		cin >> packageWeight;
		cout << "Zip Code: ";
		cin >> zipCode;
	}

	cout << "\n\nNumber of Packages: "<< numofPackages << endl;
	system("pause");

	return 0;
}