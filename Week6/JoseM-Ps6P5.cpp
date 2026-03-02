#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char jobCode;
	float hours;

	cout << "To determine expected gross pay, provide the following. \nJob Code (L, J, A): ";
	cin >> jobCode;
	cout << "Hours Worked: ";
	cin >> hours;

	float rateofPay;

	if (jobCode == 'L' && hours > 40)
	{
		rateofPay = 50.00;
	}
	else if (jobCode == 'L' && hours <= 40)
	{
		rateofPay = 40.00;
	}
	else if (jobCode == 'J' && hours > 60)
	{
		rateofPay = 100.00;
	}
	else if (jobCode == 'J' && hours <= 60)
	{
		rateofPay = 75.00;
	}
	else if (jobCode == 'A' && hours > 40)
	{
		rateofPay = 25.00;
	}
	else if (jobCode == 'A' && hours <= 40)
	{
		rateofPay = 20.00;
	}
	else
	{
		cout << "\nInvalid Job Code\n";
		return 0;
	}
	

	float grossPay = hours * rateofPay;

	cout << fixed << setprecision(2) << "\nExpected Gross Pay: $" << grossPay;
}