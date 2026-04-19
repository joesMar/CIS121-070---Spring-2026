#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void load_arrays(string frstName[], string lstName[], float salary[]) {
	int i;
	ifstream infile;

	infile.open("12.3Employee.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> frstName[i] >> lstName[i] >> salary[i];
	}

	infile.close();
}

void display_arrays(string frstName[], string lstName[], float salary[]) {
	int i;

	cout << "[Employee]	[Salary]\n";
	cout << fixed << setprecision(2);
	for (i = 0; i <= 9; i++)
	{
		cout << frstName[i] << " " << lstName[i] << "	$" << salary[i];
		cout << endl;
	}
}

void search_arrays(string frstName[], string lstName[], float salary[], string sLstName) {
	int i;
	bool foundEmployee;

	foundEmployee = false;

	for (i = 0; i <= 9 && foundEmployee == false; i++)
	{
		if (sLstName == lstName[i])
		{
			cout << fixed << setprecision(2);
			cout << "[Employee]	[Salary]\n";
			cout << frstName[i] << " " << lstName[i] << "	$" << salary[i];
			foundEmployee = true;
		}
	}

	if (foundEmployee == false)
	{
		cout << sLstName << " could not be found. Try Again";
	}

	cout << endl;
}


int main() {
	string frstName[10], lstName[10], sLstName;
	float salary[10];

	load_arrays(frstName, lstName, salary);
	display_arrays(frstName, lstName, salary);

	cout << "\n(CTRL+Z TO STOP)\n";
	cout << "Enter Employees' Last Name to see their Salary\nLast Name: ";
	cin >> sLstName;

	while (!cin.eof())
	{
		search_arrays(frstName, lstName, salary, sLstName);

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Enter Employees' Last Name to see their Salary\nLast Name: ";
		cin >> sLstName;
	}
}