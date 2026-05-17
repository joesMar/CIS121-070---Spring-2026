#include <iostream>
#include <string> // To include makes/models that have spaces
using namespace std;

void load_array(string make[], string model[], int arrSize) { //loads the values into the arrays
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Automobile #" << i + 1 << " Make: ";
		getline(cin, make[i]); //allows for inputs with spaces

		cout << "Automobile #" << i + 1 << " Model: ";
		getline(cin, model[i]); //allows for inputs with spaces
		cout << endl;
	}
}

void display_array(string make[], string model[], int arrSize) { //displays it
	cout << "[List of Autos]\n";
	for (int i = 0; i < arrSize; i++)
	{
		cout << make[i] << " | " << model[i] << endl; 
	}
}

int main() {
	int arrSize;
	
	cout << "Number of Automobiles: ";
	cin >> arrSize;

	cin.ignore(); //avoids a leftover newline from input buffer

	//allows to dynamically allocate arrays
	string* make = new string[arrSize];
	string* model = new string[arrSize];

	load_array(make, model, arrSize);
	display_array(make, model, arrSize);

	//free allocated memory
	delete[] make;
	delete[] model;

	return 0;
}