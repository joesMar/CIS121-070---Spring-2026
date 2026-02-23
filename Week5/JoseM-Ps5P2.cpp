#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float qntty, $perLBS, total;

	cout << "Please enter how many pounds of apples you want to buy. \nQuantity (lbs): ";
	cin >> qntty;

	if (qntty > 100)
	{
		$perLBS = 0.10;
	}
	else 
	{
		if (qntty >= 50)
		{
			$perLBS = 0.25;
		}
		else
		{
			$perLBS = 0.50;
		}
	}

	total = qntty * $perLBS;

	cout << "For " << qntty << " lbs of apples, the price for each pound would be $" << fixed << setprecision(2) << $perLBS << ". Therefore the total amount would be $" << total;
}