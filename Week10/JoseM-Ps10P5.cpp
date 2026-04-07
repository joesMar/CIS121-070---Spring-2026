#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void computeInvestment(float amountInvested, float fiveYearIntRate, float tenYearIntRate, float& amountFiveYear, float& amountTenYear) {
	amountFiveYear = amountInvested * pow(1.0f + fiveYearIntRate, 5);
	amountTenYear = amountInvested * pow(1.0f + tenYearIntRate, 10);
}

int main() {
	float amountInvested, fiveYearIntRate, tenYearIntRate, amountFiveYear, amountTenYear;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Amount Invested: $";
	cin >> amountInvested;
	cout << "5-Year Interest Rate (Decimal Form): ";
	cin >> fiveYearIntRate;
	cout << "10-Year Interest Rate (Decimal Form): ";
	cin >> tenYearIntRate;

	while (!cin.eof())
	{
		computeInvestment(amountInvested, fiveYearIntRate, tenYearIntRate, amountFiveYear, amountTenYear);

		cout << fixed << setprecision(2);
		cout << "\n[Amount Invested]	$" << amountInvested << "\n[Amount in 5 Years]	$" << amountFiveYear
			<< "\n[Amount in 10 Years]	$" << amountTenYear << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Amount Invested: $";
		cin >> amountInvested;
		cout << "5-Year Interest Rate (Decimal Form): ";
		cin >> fiveYearIntRate;
		cout << "10-Year Interest Rate (Decimal Form): ";
		cin >> tenYearIntRate;
	}

	return 0;
}