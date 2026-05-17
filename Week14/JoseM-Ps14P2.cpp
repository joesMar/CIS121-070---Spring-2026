#include <iostream>
#include <iomanip>
#include "HeaderComp.h"
using namespace std;

int main() {
	string make, model, cpu, hardDrive, deviceType;
	int ram;
	
	Computer theComputer;

	while (true)
	{ 
		cout << "(Ctrl+Z to quit)" << endl;
		cout << "Computer Make (Lenovo/HP/Apple): ";
		if (!getline(cin, make)) break;
		theComputer.computerMake(make);

		cout << "Computer Model: ";
		getline(cin, model);
		theComputer.computerModel(model);

		cout << "CPU Brand (Intel/AMD): ";
		getline(cin, cpu);
		theComputer.computerCpuBrand(cpu);

		cout << "RAM Size (8/16/32 GB): ";
		cin >> ram;
		theComputer.computerRamSize(ram);
		cin.ignore(); // Clear the newline character from the input buffer

		cout << "Hard Drive Type (HD/SSD): ";
		getline(cin, hardDrive);
		theComputer.computerHardDriveType(hardDrive);

		cout << "Device Type (Laptop/Desktop/Tablet/Notebook): ";
		getline(cin, deviceType);
		theComputer.deviceType(deviceType);

		cout << "\n-----------------Computer Cost-----------------" << endl;
		cout << "Make: " << theComputer.computerMake() << endl;
		cout << "Model: " << theComputer.computerModel() << endl;
		cout << "Cpu Brand: " << theComputer.computerCpuBrand() << endl;
		cout << "RAM Size: " << theComputer.computerRamSize() << " GB" << endl;
		cout << "Hard Drive Type: " << theComputer.computerHardDriveType() << endl;
		cout << "Device Type: " << theComputer.deviceType() << endl;
		cout << fixed << setprecision(2);
		cout << "TOTAL: $" << theComputer.computerPrice() << endl;
		cout << "---------------------------------------------" << endl;

		system("pause");
		cout << endl;
	}
	return 0;
}