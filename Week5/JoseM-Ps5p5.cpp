#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float weight;

	cout << "To determine the value of the metal, please enter how many pounds of metal is being recycled \nWeight (lbs): ";
	cin >> weight;

	float ratePerlbs;

	if (weight > 100)
	{
		ratePerlbs = 0.50;
	}
	else
	{
		if (weight >= 30)
		{
			ratePerlbs = 0.25;
		}
		else
		{
			if (weight >= 20)
			{
				ratePerlbs = 0.20;
			}
			else
			{
				ratePerlbs = 0.10;
			}
		}
	}

	float total = weight * ratePerlbs;
	cout << "\nFor " << weight << " lbs of metal, the value per pound is $" << fixed << setprecision(2) << ratePerlbs << ". So the grand total would be $" << total;
}