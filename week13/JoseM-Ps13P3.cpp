#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Student{
	string frstName{};
	string lstName{};
	char districtCode{};
	int creditHours{0};
	float tuition{0.0f};
};

float compute_tuition(char districtCode, int creditHours) {
	if (districtCode == 'I')
	{
		return creditHours * 250.0f;

	}
	else if (districtCode == 'O')
	{
		return creditHours * 500.0f;
	}
	else // Handles invalid district code
	{
		cout << "INVALID DISTRICT CODE\nPlease enter 'I' for in-state or 'O' for out-of-state." << endl;
		return(0); 
	}
}

void load_students(vector<Student>& students) {
	while (true) // Loop to continuously load student data until the user decides to stop (Ctrl+Z)
	{
		Student stud;
		cout << "(Ctrl+Z to Stop)";
		cout << "\nStudent " << students.size() + 1;
		
		cout << "\nFirst Name: ";
		if (!(cin >> stud.frstName)) break; // Exit loop if input fails (EOF)

		cout << "Last Name: ";
		cin >> stud.lstName;

		cout << "District Code: ";
		cin >> stud.districtCode;

		cout << "Credit Hours: ";
		cin >> stud.creditHours;
		cout << endl;

		stud.tuition = compute_tuition(stud.districtCode, stud.creditHours);

		students.push_back(stud);
	}
}

void display_students(vector<Student>& students) {
	cout << "\n---------------[Student Record]---------------\n";
	
	for (const Student& stud : students) //Range-based for loop to iterate through the vector of students and display their information
	{
		cout << "Name: " << stud.frstName << " " << stud.lstName << endl;
		cout << "District Code: " << stud.districtCode << endl;
		cout << "Credit Hours: " << stud.creditHours << endl;
		cout << fixed << setprecision(2);
		cout << "Tuition: $" << stud.tuition << endl << endl;
	}
	cout << "---------------------------------------------\n";
	cout << "Total Students: " << students.size() << endl;
}

int main() {
	vector<Student> students;

	load_students(students);
	display_students(students);

	return 0;
}