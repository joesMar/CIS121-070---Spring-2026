#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Employee structure to hold employee information
struct Employee{
	string frstName{};
	string lstName{};
	float hours{ 0.0f };
	float rate{ 0.0f };
	float grossPay{ 0.0f };
};

float compute_grossPay(float hours, float rate) {
	if (hours > 40)
	{
		float overtime = hours - 40;
		return (40 * rate) + (overtime * rate * 1.5);
	}
	else
	{
		return hours * rate;
	}
}

void load_Employees(vector<Employee>& employees, int& numEmpl) { //<Employee>& employees is a reference to the vector that will store employee data
	for (int i = 0; i < numEmpl; i++)
	{
		Employee empl; // A temporary Employee object to hold the data for each employee

		cout << "\nEmployee " << i + 1 << " First Name: ";
		cin >> empl.frstName;
		cout << "Employee " << i + 1 << " Last Name: ";
		cin >> empl.lstName;
		cout << "Hours Worked: ";
		cin >> empl.hours;
		cout << "Hourly Rate: $";
		cin >> empl.rate;

		empl.grossPay = compute_grossPay(empl.hours, empl.rate);
		
		employees.push_back(empl); // Add the employee to the vector after computing gross pay
	}
}

void display_Employees(vector<Employee>& employees) {
	cout << "\n---------------[Employee Payroll]---------------\n";

	for (int i = 0; i < employees.size(); i++) // read that .size() would be better since is more flexible if the vector size changes
	{
		// Displays employee information
		cout << "Name: " << employees[i].frstName << " " << employees[i].lstName << endl;
		cout << "Hours Worked: " << employees[i].hours << endl;
		cout << fixed << setprecision(2); 
		cout << "Hourly Rate: $" << employees[i].rate << endl;
		cout << "Gross Pay: $" << employees[i].grossPay << endl << endl;
	}
}

int main() {
	int numEmpl;

	cout << "Number of Employees: ";
	cin >> numEmpl;

	vector<Employee> employees; // Using vector to store employee data

	load_Employees(employees, numEmpl);
	display_Employees(employees);

	return 0;
}