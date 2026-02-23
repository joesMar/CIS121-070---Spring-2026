#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float annlSalary;

	cout << "To calculate the amount owed in taxes, please provide your annual salary  \nAnnual Salary: $";
	cin >> annlSalary;

	float taxRate;

	if (annlSalary > 100000)
	{
		taxRate = 0.40;
	}
	else
	{
		if (annlSalary >= 50000)
		{
			taxRate = 0.35;
		}
		else
		{
			taxRate = 0.25;
		}
	}
	
	float taxAmount = annlSalary * taxRate;
	cout << "\nWith an annual salary of $" << annlSalary << ", the tax rate would be $" << fixed << setprecision(2) << taxRate 
		<< ". \nTherefore the amount owed in taxes would be $" << taxAmount;
}