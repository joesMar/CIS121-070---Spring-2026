#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Declaring Gratutity Percentage and the variable of cost of meal 
	float gratutityPercent = 0.15;
	float $Meal;

	//Accquring the input for cost of meal
	cout << "To determine a 15% tip, please enter the total cost of meal: $";
	cin >> $Meal;

	//Calculating the tip and total with tip
	float tipAmount = $Meal * gratutityPercent;
	float totplusTip = $Meal + tipAmount;

	//Displaying all variables
	cout << "The cost for the meal before the tip would be $" << fixed << setprecision(2) << $Meal << endl
		<< "So a 15% tip would be $" << fixed << setprecision(2) << tipAmount << endl 
		<<"So the grand total of the meal would be $" << fixed << setprecision(2) << totplusTip;
}