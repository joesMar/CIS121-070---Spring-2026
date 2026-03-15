#include <iostream>
#include <iomanip>
using namespace std;

float computePay(char jobCode, float hours) {
	float pay, payRate, Overtime;

	if (jobCode == 'L')
	{
		payRate = 25.00;
	}
	else if (jobCode == 'A')
	{
		payRate = 30.00;
	}
	else if (jobCode == 'J')
	{
		payRate = 50.00;
	}
	else
	{
		cout << "INVALID JOB CODE";
		return 0;
	}


	if (hours > 40)
	{
		Overtime = hours - 40;
		pay = (40 * payRate) + (Overtime * (payRate * 1.5));
	}
	else
	{
		pay = hours * payRate;
	}

	return pay;
}

int main() {
	string employeeLstname;
	float hours, pay;
	char jobCode;
	float avgPay = 0;
	int numOfemployee = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Employee's Last Name: ";
	cin >> employeeLstname;
	cout << employeeLstname << "'s Job Code (L, A, J): ";
	cin >> jobCode;
	cout << "Amount of hours employee worked: ";
	cin >> hours;

	while (!cin.eof())
	{
		pay = computePay(jobCode, hours);

		avgPay = avgPay + pay;
		++numOfemployee;

		cout << endl << "[Employee: " << employeeLstname << "]\n";
		cout << "Job Code: " << jobCode;
		cout << fixed << setprecision(2);
		cout << "\nHours Worked: " << hours;
		cout << "\nGross Pay: $" << pay << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Employee's Last Name: ";
		cin >> employeeLstname;
		cout << employeeLstname << "'s Job Code (L, A, J): ";
		cin >> jobCode;
		cout << "Amount of hours employee worked: ";
		cin >> hours;
	}

	avgPay = avgPay / numOfemployee;

	cout << "\n\nThe average pay for the " << numOfemployee << " employees is $" << avgPay << endl;
	system("pause");

	return 0;
}