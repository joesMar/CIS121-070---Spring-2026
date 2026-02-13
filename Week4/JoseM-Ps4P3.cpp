#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numofBooks; 
	float $ofBooks;

	cout << "Number of Books: ";
	cin >> numofBooks;
	cout << "Cost per Book: $";
	cin >> $ofBooks;

	float ordrTot = numofBooks * $ofBooks;
	int shippingChrge;

	if (ordrTot <= 50)
	{
		shippingChrge = 25;
	}
	else
	{
		shippingChrge = 0;
	}

	cout << "The total for " << numofBooks << " books is $" << fixed << setprecision(2) << ordrTot << " with the shipping charge of $" << shippingChrge;

}