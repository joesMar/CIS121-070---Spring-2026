#include <iostream>
#include <iomanip>
using namespace std;

float computeCreditHourRate(char districtCode) {
	float creditHourRate;
	
	if (districtCode == 'I')
	{
		creditHourRate = 250.00;
	}
	else if (districtCode == 'O')
	{
		creditHourRate = 550.00;
	}
	else
	{
		cout << "INVALID DISTRICT CODE";
		return 0;
	}

	return creditHourRate;
}

float computeTuition(int creditHours, float creditHourRate) {
	float tuition = creditHours * creditHourRate;

	return tuition;
}

int main() {
	string studentLstName;
	char districtCode;
	int creditHours;
	float creditHourRate, tuition;
	float totTuition = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Student's Last Name: ";
	cin >> studentLstName;
	cout << "Credit Hours Taken: ";
	cin >> creditHours;
	cout << "In-District or Out of District (I/O): ";
	cin >> districtCode;

	while (!cin.eof()) 
	{
		creditHourRate = computeCreditHourRate(districtCode);
		tuition = computeTuition(creditHours, creditHourRate);

		totTuition = totTuition + tuition;

		cout << fixed << setprecision(2);
		cout << "\n[Student]		" << studentLstName << "\n[Tuition]		$" << tuition << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Student's Last Name: ";
		cin >> studentLstName;
		cout << "Credit Hours Taken: ";
		cin >> creditHours;
		cout << "In-District or Out of District (I/O): ";
		cin >> districtCode;
	}
	cout << "\n\nThe total cost of tuition from all enrolled students is $" << totTuition << endl;
	system("pause");

	return 0;

}