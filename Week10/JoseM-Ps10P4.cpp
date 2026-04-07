#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgetOrder(int numofWidgets, float& costperWidget, float& extendedPrice, float& taxAmount, float& totOdrAmount) {
	if (numofWidgets >= 10000)
	{
		costperWidget = 4.00f;
	}
	else if (numofWidgets >= 5000)
	{
		costperWidget = 5.00f;
	}
	else
	{
		costperWidget = 10.00f;
	}

	extendedPrice = numofWidgets * costperWidget;
	taxAmount = extendedPrice * 0.07f;
	totOdrAmount = extendedPrice + taxAmount;
}

int main() {
	int numofWidgets;
	float costperWidget, extendedPrice, taxAmount, totOdrAmount;
	float sumTotOdrAmount = 0.0f;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Amount of Widgets: ";
	cin >> numofWidgets;

	while (!cin.eof())
	{
		computeWidgetOrder(numofWidgets, costperWidget, extendedPrice, taxAmount, totOdrAmount);

		sumTotOdrAmount = sumTotOdrAmount + totOdrAmount;

		cout << fixed << setprecision(2);
		cout << "\n[Widget Amount]		" << numofWidgets << "\n[Cost/Widget]		$" << costperWidget << "\n[Extended Price]	$" << extendedPrice
			<< "\n[Tax Amount]		$" << taxAmount << "\n[Total]			$" << totOdrAmount << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Amount of Widgets: ";
		cin >> numofWidgets;
	}

	cout << "\n\nThe sum for all the order total's is $" << sumTotOdrAmount << endl;
	system("pause");

	return 0;
}