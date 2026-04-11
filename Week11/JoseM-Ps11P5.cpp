#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void computeClassCost(char districtCode, int creditHours, float& creditHourRate, float& tuition, float& courseFee) {
	if (districtCode == 'I')
	{
		creditHourRate = 250.0f;
	}
		else if (districtCode == 'O')
		{
			creditHourRate = 500.0f;
		}
		else
		{
			cout << "INVALID DISTRICT CODE";
			exit(0);
		}

	tuition = creditHours * creditHourRate;
	courseFee = tuition * 0.1f;
}

int main() {
	string lstName;
	char districtCode;
	int creditHours;
	float creditHourRate, tuition, courseFee, avgTuition;
	float totTuition = 0.0f;
	int numStudents = 0;
	ifstream infile;

	infile.open("Ps11P5Student.txt");

	while (!infile.eof())
	{
		infile >> lstName >> districtCode >> creditHours;

		computeClassCost(districtCode, creditHours, creditHourRate, tuition, courseFee);

		totTuition = totTuition + tuition;
		numStudents++;

		cout << fixed << setprecision(2);
		cout << "Student: " << lstName << "\n[District Code]		" << districtCode << "\n[Credits Taken]		" << creditHours
			<< "\n[Credit Hour Rate]	$" << creditHourRate << "\n[Tuition]		$" << tuition << "\n[Course Fee]		$" << courseFee;
		cout << endl;

		system("pause");
		cout << endl;
	}
	infile.close();

	avgTuition = totTuition / numStudents;

	cout << "\nThrough the " << numStudents << " student's, they collective owe $" << totTuition
		<< " in tuition\nMaking the average tuition be $" << avgTuition << endl;

	system("pause");
}