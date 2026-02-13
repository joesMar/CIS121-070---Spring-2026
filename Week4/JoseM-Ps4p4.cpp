#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string appliance;
	float appliance$;

	cout << "Appliance: ";
	cin >> appliance;
	cout << "Cost of appliance: $";
	cin >> appliance$;

	float warranty;
	if (appliance$ > 1000)
	{
		warranty = appliance$ * 0.1;
	}
	else
	{
		warranty = appliance$ * 0.05;
	}

	float total = appliance$ + warranty;

	cout << fixed << setprecision(2) << "The " << appliance << " cost $" << appliance$ << ", and with the warranty of $" << warranty << ", the total would be $" << total;
}