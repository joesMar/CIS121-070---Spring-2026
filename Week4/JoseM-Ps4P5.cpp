#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string frstName, lstName;
	int numDpndnts;
	float grssIncome;

	cout << "To determine your income tax, please enter your full name," << endl << "the amount of Dependents you have, and your gross income." << endl << "Full Name: ";
	cin >> frstName >> lstName;
	cout << "# of Dependents: ";
	cin >> numDpndnts;
	cout << "Gross Income: $";
	cin >> grssIncome;

	float adjGrss$ = grssIncome - (numDpndnts * 12000);
	float taxRate;
	if (adjGrss$ > 50000)
	{
		taxRate = 0.2;
	}
	else
	{
		taxRate = 0.1;
	}

	float incomeTax = adjGrss$ * taxRate;
	if (incomeTax < 0)
	{
		incomeTax = 100;
		cout << fixed << setprecision(2) << endl <<lstName << " with a count of " << numDpndnts << " claimable dependents and gross income of $"
			<< grssIncome << "," << endl << "would have the adjusted gross income in the negatives and automatically make the income tax $" << incomeTax << endl;
	}
	else
	{
		cout << fixed << setprecision(2) << endl <<lstName << " with a count of " << numDpndnts << " claimable dependents and gross income of $"
			<< grssIncome << "," << endl << "would have the adjusted gross income of $" << adjGrss$ << " and having a income tax of $" << incomeTax << endl;
	}
	

}