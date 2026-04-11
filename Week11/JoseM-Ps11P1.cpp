#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void computeAutoSale(float MSRP, float salesPrice, float& savings, float& salesTax) {
	savings = MSRP - salesPrice;
	salesTax = salesPrice * 0.07f;
}

int main() {
	string make, model;
	float MSRP, salesPrice, savings, salesTax;
	float sumofSavings = 0.0f;
	ifstream infile;

	infile.open("Ps11P1Auto.txt"); //Opens Ps11P1Auto.txt in the solution

	while (!infile.eof()) 
	{
		infile >> make >> model >> MSRP >> salesPrice; //Grabs the data from the txt 

		computeAutoSale(MSRP, salesPrice, savings, salesTax);

		sumofSavings = sumofSavings + savings;

		cout << fixed << setprecision(2);
		cout << "\n[Make]		" << make << "\n[Model]		" << model << "\n[MSRP]		$" << MSRP << "\n[Sales Price]	$" 
			<< salesPrice << "\n[Savings]	$" << savings << "\n[Sales Tax]	$" << salesTax;
		cout << endl;

		system("pause");
	}
	infile.close(); //closes Ps11P1Auto.txt

	cout << "\n\nThe sum for all the savings is $" << sumofSavings << endl;
	system("pause");

	return 0;
}