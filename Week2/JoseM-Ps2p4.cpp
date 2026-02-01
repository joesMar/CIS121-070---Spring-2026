#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string firstName, lstName;
	int credits;
	int TpCH = 250;
	int labFee = 100;
	cout << "Please enter your full name: ";
	cin >> firstName >> lstName;
	cout << "Enter the amount of credits taken: ";
	cin >> credits;
	int totTuiton = credits * TpCH + labFee;
	cout << lstName << ", your total tuition would be $" << fixed << setprecision(2) << totTuiton;
}