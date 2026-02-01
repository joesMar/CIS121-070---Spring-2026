#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float item$;
	int DiscntPrcnt;
	cout << "Please enter the price of the item and the percentage of the discout" << endl <<"Item Price: $";
	cin >> item$;
	cout << "Discount Percentage: ";
	cin >> DiscntPrcnt;
	float decimalDP = DiscntPrcnt * 0.01;
	float DiscountedItem$ = item$ - item$ * decimalDP;
	cout << "With a discount of " << DiscntPrcnt << "%, the discounted price would be $" << fixed << setprecision(2) << DiscountedItem$;
}