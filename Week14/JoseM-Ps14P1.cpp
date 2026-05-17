#include <iostream>
#include <iomanip>
#include "HeaderMemb.h"
using namespace std;

int main() { 
	string fName, lName, mType;
	int age;
	
	Member theMember;
	
	while (true) 
	{
		cout << "(Ctrl+Z to quit)" << endl;
		cout << "Enter First Name: ";
		if (!getline(cin, fName)) break;
		theMember.memberFrstName(fName);

		cout << "Enter Last Name: ";
		getline(cin, lName);
		theMember.memberLastName(lName);

		cout << "Enter Age: ";
		cin >> age;
		theMember.memberAge(age);
		cin.ignore(); // Clear the newline character from the input buffer

		cout << "Enter Membership Type (Gold/Silver/Bronze): ";
		getline(cin, mType);
		theMember.membershipType(mType);

		cout << "\n-----------------Member Information-----------------" << endl;
		cout << "Name: " << theMember.memberFrstName() << " " << theMember.memberLastName() << endl;
		cout << "Age: " << theMember.memberAge() << endl;
		cout << "Membership type: " << theMember.membershipType() << endl;
		cout << fixed << setprecision(2);
		cout << "Membership cost: $" << theMember.membershipCost() << endl;
		cout << "----------------------------------------------------" << endl;

		system("pause");
		cout << endl;
	}
	return 0;
}