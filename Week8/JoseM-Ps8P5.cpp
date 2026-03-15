#include <iostream>
#include <iomanip>
using namespace std;

float computeLabFee(string department, int courseCode) {
	float labFee;

	if (department == "CIS" && courseCode == 101)
	{
		labFee = 50.00;
	}
	else if (department == "CIS" && courseCode == 121)
	{
		labFee = 100.00;
	}
	else if (department == "MAT" && courseCode == 111)
	{
		labFee = 25.00;
	}
	else if (department == "MAT" && courseCode == 112)
	{
		labFee = 35.00;
	}
	else if (department == "ENG" && courseCode == 100)
	{
		labFee = 55.00;
	}
	else if (department == "CIS" || department == "MAT" || department == "ENG")
	{
		labFee = 50.00;
	}
	else
	{
		cout << "INVALID DEPARTMENT\n";
		return 0;
	}

	return labFee;
}

int main() {
	string department;
	int courseCode, numofCourses = 0;
	float labFee, totalLabFee = 0, avgLabFee = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "[Department]	[Course Code]\nCIS		101\nCIS		121\nMAT		111\nMAT		112\nENG		100";
	cout << "\nDepartment: ";
	cin >> department;
	cout << "Course Code: ";
	cin >> courseCode;

	while (!cin.eof())
	{
		labFee = computeLabFee(department, courseCode);

		totalLabFee = totalLabFee + labFee;
		avgLabFee = avgLabFee + labFee;
		++numofCourses;

		cout << fixed << setprecision(2);
		cout << "The Lab Fee for " << department << " " << courseCode  << " is $" << labFee << endl << endl;
		
		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "[Department]	[Course Code]\nCIS		101\nCIS		121\nMAT		111\nMAT		112\nENG		100";
		cout << "\nDepartment: ";
		cin >> department;
		cout << "Course Code: ";
		cin >> courseCode;
	}
	
	avgLabFee = avgLabFee / numofCourses;

	cout << "\n\nThe total for all the courses' lab fee is $" << totalLabFee << ". The average lab fee cost around $" << avgLabFee <<endl;
	system("pause");

}