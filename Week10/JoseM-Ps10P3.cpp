#include <iostream>
#include <iomanip>
using namespace std;

void computeTuition(int creditHours, float financialAid, float& tuition, float& tuitionOwed) {
	tuition = creditHours * 250.0f;
	tuitionOwed = tuition - financialAid;
}

int main() {
	string stdntLstName;
	int creditHours;
	int numofStudents = 0;
	float financialAid, tuition, tuitionOwed;
	float totTuitionOwed = 0.0f, avgTuitionOwed = 0.0f;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Student's Last Name: ";
	cin >> stdntLstName;
	cout << "Amount of Credit Hours: ";
	cin >> creditHours;
	cout << "Financial Aid Granted: $";
	cin >> financialAid;

	while (!cin.eof())
	{
		computeTuition(creditHours, financialAid, tuition, tuitionOwed);

		totTuitionOwed = totTuitionOwed + tuitionOwed;
		numofStudents++;

		cout << fixed << setprecision(2);
		cout << "\n[Last Name]	" << stdntLstName << "\n[Base Tuition]	$" << tuition << "\n[Tuition Owed]	$" << tuitionOwed;
		cout << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Student's Last Name: ";
		cin >> stdntLstName;
		cout << "Amount of Credit Hours: ";
		cin >> creditHours;
		cout << "Financial Aid Granted: $";
		cin >> financialAid;
	}

	avgTuitionOwed = totTuitionOwed / numofStudents;

	cout << "\n\nThrough the " << numofStudents << " enrolled student's, the total amount of tuition owed\nis $"
		<< totTuitionOwed << ", with the average amount student's paying coming around to $" << avgTuitionOwed << endl;
	system("pause");

	return 0;
}