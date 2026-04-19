#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void load_arrays(string city[], int population[]) {
	int i;
	ifstream infile;

	infile.open("12.2City.txt");

	for (i = 0; i <= 7; i++)
	{
		infile >> city[i] >> population[i];
	}

	infile.close();
}

void display_arrays(string city[], int population[]) {
	int i;

	for (i = 0; i <= 7; i++)
	{
		cout << city[i] << " " << population[i];
		cout << endl;
	}
}

void search_arrays(string city[], int population[], string sCity) {
	int i;
	bool foundCity;

	foundCity = false;

	for (i = 0; i <= 7 && foundCity == false; i++)
	{
		if (sCity == city[i])
		{
			cout << city[i] << " " << population[i];
			foundCity = true;
		}
	}

	if (foundCity == false)
	{
		cout << sCity << " could not be found. Try Again";
	}

	cout << endl;
}


int main() {
	string city[8], sCity;
	int population[8];

	load_arrays(city, population);
	display_arrays(city, population);

	cout << "\n(CTRL+Z TO STOP)\n";
	cout << "Enter a City to see its Population: ";
	cin >> sCity;

	while (!cin.eof())
	{
		search_arrays(city, population, sCity);

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Enter a City to see its Population: ";
		cin >> sCity;
	}
}