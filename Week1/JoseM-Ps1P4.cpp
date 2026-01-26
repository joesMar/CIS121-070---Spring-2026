#include <iostream>
using namespace std;

int main() {
		//variables
	int num1, num2, num3;
	int sum;
	int product;
		//inputs
	cout << "Hello User. Please enter 3 numbers " << endl;
	cin >> num1 >> num2 >> num3;
		//calculation
	sum = num1 + num2;
	product = sum * num3;
		//output
	cout << "The result is " << product;
}