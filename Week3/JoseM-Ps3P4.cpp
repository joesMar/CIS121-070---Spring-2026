#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Declaring the Variables of Stock purhcase price and stock current price
	float stokPrchse$;
	float stokCrrnt$;
	
	//Accquring the input for Stock purhcase price and stock current price
	cout << "To see the percentage change of a stock, provide the price when it was purchased and it's current price." << endl << "Price when Purchased: $";
	cin >> stokPrchse$;
	cout << "Current Price: $";
	cin >> stokCrrnt$;

	//Calculating the price change and percentage change
	float priceChange = stokCrrnt$ - stokPrchse$;
	float percentChange = (priceChange / stokPrchse$) * 100;

	//Displaying the percentage change
	cout << "The percentage change of the stock is " << fixed << setprecision(2) << percentChange << "%.";
}