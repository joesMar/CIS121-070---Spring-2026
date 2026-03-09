#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string studentsLstname;
	char districtCode;
	float creditHours,tuition, credithourRate;
	float totTuition = 0, totCredithour = 0;
	int numOfstudents = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Students's Last Name: ";
	cin >> studentsLstname;
	cout << "Credit Hours Taken: ";
	cin >> creditHours;
	cout << "In-District or Out of District (I/O): ";
	cin >> districtCode;

	while (!cin.eof())
	{
		if (districtCode == 'I')
		{
			credithourRate = 250.00;
		}
		else if (districtCode == 'O')
		{
			credithourRate = 550.00;
		}
		else
		{
			cout << "INVALID DISTRICT CODE";
			return 0;
		}

		tuition = creditHours * credithourRate;
		totTuition = totTuition + tuition;
		totCredithour = totCredithour + creditHours;
		++numOfstudents;

		cout << endl << studentsLstname << "'s ";
		cout << fixed << setprecision(2);
		cout << "Tuition: $" << tuition << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Students's Last Name: ";
		cin >> studentsLstname;
		cout << "Credit Hours Taken: ";
		cin >> creditHours;
		cout << "In-District or Out of District (I/O): ";
		cin >> districtCode;
	}

	cout << "\n\nFrom the " << numOfstudents << " enrolled students taking " << totCredithour 
		<< " credit hours all together, the semester's total tuition would be $" << totTuition << endl;
	system("pause");
}