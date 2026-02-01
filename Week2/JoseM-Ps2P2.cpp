#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string firstName, lstName;
	cout << "Please enter employee's full name		";
	cin >> firstName >> lstName;
	int hours;
	float payrate;
	cout << "Please enter the amount of hours the employee worked and their pay rate" << endl;
	cout << "Hours Worked: ";
	cin >> hours;
	cout << "Payrate: $";
	cin >> payrate;
	float grossPay = hours * payrate;
	cout << lstName << "'s gross pay would be $" << fixed << setprecision(2) << grossPay;
}