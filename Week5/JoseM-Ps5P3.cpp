#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string frstName, lstName;
	float hours;
	char jobCode;

	cout << "To calculate an estimate paycheck, start off by entering the full name of the employee \nFull Name: ";
	cin >> frstName >> lstName;
	cout << "\nNow provide how many hours the employee has worked \nHours Worked: ";
	cin >> hours;
	cout << "\nFinally, provide the employee's job code \nJob Code (E,J,A): ";
	cin >> jobCode;

	float payRate;

	if (jobCode == 'E')
	{
		payRate = 25.00;
	}
	else
	{
		if (jobCode == 'J')
		{
			payRate = 20.00;
		}
		else
		{
			if (jobCode == 'A')
			{
				payRate = 15.00;
			}
			else
			{
				cout << "\nInvalid Job Code!";
				return 0;
			}
		}
	}

	float total = hours * payRate;
	
	cout << endl << lstName << " has worked " << hours << " hours and since they earn $" << payRate << " per hour, their expected paycheck should be $" << fixed << setprecision(2) << total;
}