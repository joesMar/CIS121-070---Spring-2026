#pragma once
#include <string>
using namespace std;

class Member
{
public:
	void memberFrstName(string fName);
	string memberFrstName();
	
	void memberLastName(string lName);
	string memberLastName();
	
	void memberAge(int age);
	int memberAge();
	
	void membershipType(string mType);
	string membershipType();
	
	float membershipCost();
private: 
	string m_firstName;
	string m_lastName;
	int m_age;
	string m_membershipType;
	float m_membershipCost;
}; 
void Member::memberFrstName(string fName) {
	if (fName != "")
		m_firstName = fName;
	else
		m_firstName = "Not Entered";
}
string Member::memberFrstName() {
	return m_firstName;
}

void Member::memberLastName(string lName) {
	if (lName != "")
		m_lastName = lName;
	else
		m_lastName = "Not Entered";
}
string Member::memberLastName() {
	return m_lastName;
}

void Member::memberAge(int age) {
	if (age > 0)
		m_age = age;
	else
		m_age = 18;
}
int Member::memberAge() {
	return m_age;
}

void Member::membershipType(string mType) {
	if (mType == "Gold" || mType == "Silver" || mType == "Bronze")
		m_membershipType = mType;
	else
		m_membershipType = "Bronze";
}
string Member::membershipType() {
	return m_membershipType;
}

// Calculate membership cost based on type and age
float Member::membershipCost() {
	m_membershipCost = 0.0f;

	if (m_membershipType == "Gold")
		m_membershipCost = 1200.0f;
	else if (m_membershipType == "Silver")
		m_membershipCost = 1000.0f;
	else
		m_membershipCost = 500.0f;

	if (m_age > 50)
		m_membershipCost *= 0.9f;

	return m_membershipCost;
}