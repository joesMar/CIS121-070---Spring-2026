#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Declaring the Variables for the fixed costs, the price per unit, and the cost per unit
	float fixed$;
	float priceperUnit;
	float costperUnit;
	
	//Accquring the input for the fixed costs, the price per unit, and the cost per unit
	cout << "To find how many units to sell to break even, please enter fixed costs, the price per unit, and the cost per unit." << endl << "Enter fixed costs: $";
	cin >> fixed$;
	cout << "Enter price per unit: $";
	cin >> priceperUnit;
	cout << "Enter cost per unit: $";
	cin >> costperUnit;

	//Calculating the break-even point
	float breakevenPoint = fixed$/ (priceperUnit - costperUnit);

	//Displaying the break-even point
	cout << "Break-even point (units to sell): " << fixed << setprecision(2) << breakevenPoint;
}