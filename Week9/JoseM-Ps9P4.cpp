#include <iostream>
#include <iomanip>
using namespace std;

float computePayRate(char jobCode) {
	float payRate;

	if (jobCode == 'L')
	{
		payRate = 25;
	}
	else if (jobCode == 'A')
	{
		payRate = 30;
	}
	else if (jobCode == 'J')
	{
		payRate = 50;
	}
	else
	{
		cout << "INVALID JOB CODE";
		return 0;
	}

	return payRate;
}

float computeGrossPay(float hours, float payrate) {
	float grossPay, overtime;

	if (hours > 40)
	{
		overtime = hours - 40;
		grossPay = (40 * payrate) + (overtime * 1.5);
	}
	else
	{
		grossPay = hours * payrate;
	}

	return grossPay;
}

int main() {
	string emplyeeLstName;
	char jobCode;
	float hours, grossPay, payRate;
	float totGrossPay = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Employee's Last Name: ";
	cin >> emplyeeLstName;
	cout << "Employee Job Code (L, A, J): ";
	cin >> jobCode;
	cout << "Hours Worked: ";
	cin >> hours;

	while (!cin.eof())
	{
		payRate = computePayRate(jobCode);
		grossPay = computeGrossPay(hours, payRate);

		totGrossPay = totGrossPay + grossPay;

		cout << fixed << setprecision(2);
		cout << "\n[Employee]		" << emplyeeLstName << "\n[Gross Pay]		$" << grossPay << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Employee's Last Name: ";
		cin >> emplyeeLstName;
		cout << "Employee Job Code (L, A, J): ";
		cin >> jobCode;
		cout << "Hours Worked: ";
		cin >> hours;
	}
	cout << "\n\nThe total for all the employee's gross pay is $" << totGrossPay << endl;
	system("pause");

	return 0;
}