#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int quantity;
	char locatCode;

	cout << "Amount of tickets: ";
	cin >> quantity;
	cout << "Location !PROMOTION ON H & L!: ";
	cin >> locatCode;

	float $perTicket;

	if (quantity >= 25 || locatCode == 'H')
	{
		$perTicket = 30.00;
	}
	else if (quantity >= 10 || locatCode == 'L')
	{
		$perTicket = 40.00;
	}
	else if (quantity < 10)
	{
		$perTicket = 50.00;
	}
	else
	{
		cout << "\nInvalid Amount\n";
		return 0;
	}

	float Total = quantity * $perTicket;

	cout << "Order amount: " << quantity << " Tickets \n" << fixed << setprecision(2) << "Price per Ticket: $" << $perTicket << endl << "Total: $" << Total;
}