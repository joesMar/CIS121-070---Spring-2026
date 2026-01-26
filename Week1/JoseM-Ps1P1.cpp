#include <iostream>
using namespace std;

int main() {
	string firstname, lastname;
	cout << "Hello user, please tell my your full name." << endl << "I'm... ";
	cin >> firstname >> lastname;
	cout << "Hello " << lastname<<"!";
}