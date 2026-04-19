#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;

void load_arrays(string frstName[], string lstName[], float gpa[]) {
	int i;
	ifstream infile;

	infile.open("12.1Students.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> frstName[i] >> lstName[i] >> gpa[i];
	}

	infile.close();
}

void display_arrays(string frstName[], string lstName[], float gpa[]) {
	int i;

	cout << fixed << setprecision(2);
	for (i = 0; i <= 9; i++)
	{
		cout << fixed << setprecision(2);
		cout << frstName[i] << " " << lstName[i] << " " << gpa[i];
		cout << endl;
	}
}

void display_revarrays(string frstName[], string lstName[], float gpa[]) {
	int i;
	ifstream infile;

	cout << "\n[Reverse Order]\n";

	for (i = 9; i >= 0; i = i - 1)
	{
		cout << fixed << setprecision(2);
		cout << frstName[i] << " " << lstName[i] << " " << gpa[i];
		cout << endl;
	}
}

int main() {
	string frstName[10], lstName[10];
	float gpa[10];

	load_arrays(frstName, lstName, gpa);
	display_arrays(frstName, lstName, gpa);
	display_revarrays(frstName, lstName, gpa);

	return 0;
}