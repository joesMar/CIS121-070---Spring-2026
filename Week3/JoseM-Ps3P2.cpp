#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Variables for the input 
	float stockPrice;
	int qntyofStocks;

	//Accquiring stock price and quantity of stocks
	cout << "Enter the price of the stock: $";
	cin >> stockPrice;
	cout << "Enter the quantity of stocks wanting to be purchase: ";
	cin >> qntyofStocks;

	//Calculating the value of the stock(s)
	float valueofStock = stockPrice * qntyofStocks;

	//Displaying the value of the stock(s)
	cout << "The value of the stock(s) would be $" << fixed << setprecision(2) << valueofStock;
}