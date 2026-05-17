#include <iostream>
#include <string>
using namespace std;

class Employee 
{
public:
	Employee();

	void FirstName(string fname);
	string FirstName();

	void LastName(string lname);
	string LastName();

	void Salary(float sal);
	float Salary();

	virtual float Bonus(); // The Bonus method is declared as virtual to allow for overriding in derived classes

	virtual ~Employee(); // The destructor is declared here and defined below
protected:
	string m_firstName, m_lastName;
	float m_salary, m_bonus;
};
// Employee destructor
Employee:: ~Employee()
{
	cout << "Goodbye" << endl;
	system("pause");
}
// Employee constructor initializes salary to 0.00
Employee::Employee()
{
	m_salary = 0.0f;
	m_bonus = 0.0f;
}

void Employee::FirstName(string fname) // sets the first name of the employee
{
	m_firstName = fname;
}
string Employee::FirstName() // returns the first name of the employee
{
	return m_firstName;
}

void Employee::LastName(string lname) // sets the last name of the employee
{
	m_lastName = lname;
}
string Employee::LastName() // returns the last name of the employee
{
	return m_lastName;
}

void Employee::Salary(float sal) // sets the salary of the employee
{
	m_salary = sal;
}
float Employee::Salary() // returns the salary of the employee
{
	return m_salary;
}

float Employee::Bonus() // calculates and returns the bonus based on the salary
{
	if (m_salary > 100000.00)
	{
		m_bonus = m_salary * 0.20f; //
	}
	else
	{
		m_bonus = m_salary * 0.10f;
	}
	return m_bonus;
}

class Manager : public Employee
{
public:
	Manager();

	float LongTermBonus();
	float Bonus() override; // Override the Bonus

private:
	float m_longTermBonus;
};
// Manager constructor initializes long-term bonus to 0.00
Manager::Manager()
{
	m_longTermBonus = 0.0f;
}

float Manager::LongTermBonus()
{
	m_longTermBonus = m_salary * 0.50f; // Calculate the long-term bonus as 50% of the salary
	return m_longTermBonus;
}

float Manager::Bonus() // Override the Bonus method to include long-term bonus
{
	if (m_salary > 100000.00)
	{
		m_bonus = (m_salary * 0.50f) * 0.20f; // Calculate the bonus based on the long-term bonus
	}
	else
	{
		m_bonus = (m_salary * 0.50f) * 0.10f;
	}
	return m_bonus;
}
// Main function to demonstrate the functionality of the Manager class
int main()
{
	Manager mana;

	mana.FirstName("John");
	mana.LastName("Smith");
	mana.Salary(120000.00f);

	//Display all methods
	cout << "Manager Information" << endl;
	cout << "-------------------" << endl;
	cout << "First Name: " << mana.FirstName() << endl;
	cout << "Last Name: " << mana.LastName() << endl;
	cout << "Salary: $" << mana.Salary() << endl;
	cout << "Bonus: $" << mana.Bonus() << endl;
	cout << "Long Term Bonus: $" << mana.LongTermBonus() << endl;
	cout << "-------------------" << endl;
	return 0;
}