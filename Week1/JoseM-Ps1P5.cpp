#include <iostream>
using namespace std;

int main() {
	float rN1, rN2;
	cout << "User. Please enter two numbers that I can find the sum, product, and difference of." << endl;
	cin >> rN1 >> rN2;
	float sum;
	float prdct;
	float dffrnce;
	sum = rN1 + rN2;
	prdct = rN1 * rN2;
	dffrnce = rN1 - rN2;
	cout << " The sum of " << rN1 << " and " << rN2 << " is " << sum << endl;
	cout << " The product of " << rN1 << " and " << rN2 << " is " << prdct << endl;
	cout << " The difference of " << rN1 << " and " << rN2 << " is " << dffrnce << endl;
}