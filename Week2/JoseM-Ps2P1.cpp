#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int qnty;
	float unit$;
	cout << "Enter the quantity of the item		";
	cin >> qnty;
	cout << "Enter the price per unit		$";
	cin >> unit$;
	float extended$ = qnty*unit$;
	cout << "The exteneded price would be $" << fixed << setprecision(2) << extended$ <<endl;
}