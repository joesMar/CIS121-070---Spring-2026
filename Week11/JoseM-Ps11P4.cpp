#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void computeBiWeeklyPay(float annualSalary, float& biWeeklySalary) {
	biWeeklySalary = (float)annualSalary / 26;
}

int main() {
	string lstName;
	float annualSalary, biWeeklySalary, avgAnnualSalary;
	int numEmployee = 0;
	float totAnnualSalary = 0.0f;
	ifstream infile;

	infile.open("Ps11P4Empl.txt");

	while (!infile.eof())
	{
		infile >> lstName >> annualSalary;

		computeBiWeeklyPay(annualSalary, biWeeklySalary);

		totAnnualSalary = totAnnualSalary + annualSalary;
		numEmployee++;

		cout << fixed << setprecision(2);
		cout << "Employee:		" << lstName << "\n[Annual Salary]		$" << annualSalary << "\n[Bi-Weekly Pay]		$" << biWeeklySalary;
		cout << endl;

		system("pause");
		cout << endl;
	}
	infile.close();

	avgAnnualSalary = (float)totAnnualSalary / numEmployee;

	cout << "\nThrough the " << numEmployee << " employees, they collective earn $" << totAnnualSalary 
		<< "\nMaking the average annual salary be $" << avgAnnualSalary << endl;

	system("pause");
}