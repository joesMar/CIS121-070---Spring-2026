#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void computeMpg(float gasGal, float miles, float& mpg) {
	mpg = (float)miles / gasGal;
}

int main() {
	float gasGal, miles, mpg;
	float totGasGal = 0.0f, totMiles = 0.0f;
	int tripNum = 0;
	ifstream infile;

	infile.open("Ps11P3Trips.txt");

	while (!infile.eof()) 
	{
		infile >> gasGal >> miles;

		computeMpg(gasGal, miles, mpg);

		totGasGal = totGasGal + gasGal;
		totMiles = totMiles + miles;
		tripNum++;

		cout << fixed << setprecision(2);
		cout << "Trip " << tripNum << "\n[Gas Used]		" << gasGal << " gal.\n[Miles Travelled]	" << miles << " mi. \n[Mpg]			" << mpg;
		cout << endl;
		
		system("pause");
		cout << endl;
	}
	infile.close();

	cout << "\nTotal amount of gallons of gas used: " << totGasGal << " gal.\nTotal amount of miles travelled: " << totMiles << " mi." << endl;
	system("pause");
}