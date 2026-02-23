#include <iostream>
using namespace std;

int main() {
	string lastName;
	float score;

	cout << "To determine a student's grade, start off by providing the last name of said student. \nStudent's Last Name: ";
	cin >> lastName;
	cout << "Now enter their score. \nScore (%): ";
	cin >> score;

	char lttrGrade;

	if (score >= 90)
	{
		lttrGrade = 'A';
	}
	else 
	{
		if (score >= 80)
		{
			lttrGrade = 'B';
		}
		else
		{
			if (score >= 70)
			{
				lttrGrade = 'C';
			}
			else
			{
				if (score >= 60)
				{
					lttrGrade = 'D';
				}
				else
				{
					lttrGrade = 'F';
				}
			}
		}
	}

	cout << endl << lastName << " scored an " << lttrGrade;
}