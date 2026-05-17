#pragma once
#include <string>
using namespace std;

class Computer
{
public:

	void computerMake(string make);
	string computerMake();

	void computerModel(string model);
	string computerModel();

	void computerCpuBrand(string cpu);
	string computerCpuBrand();

	void computerRamSize(int ram);
	int computerRamSize();

	void computerHardDriveType(string hardDrive);
	string computerHardDriveType();

	void deviceType(string type);
	string deviceType();

	float computerPrice();
private:
	string m_make;
	string m_model;
	string m_cpu;
	int m_ram;
	string m_hardDrive;
	string m_deviceType;
	float m_price;
};


void Computer::computerMake(string make) {
	if (make == "Lenovo" || make == "HP" || make == "Apple")
		m_make = make;
	else // Default to Lenovo if an invalid make is provided
		m_make = "Lenovo";
}
string Computer::computerMake() {
	return m_make;
}

void Computer::computerModel(string model) {
	if (model != "" || model.find(' ') != string::npos) // Accept any non-empty model name, including those with spaces
		m_model = model;
	else // Default to LE100A if an empty model is provided
		m_model = "LE100A";
}
string Computer::computerModel() {
	return m_model;
}

void Computer::computerCpuBrand(string cpu) {
	if (cpu == "Intel" || cpu == "AMD")
		m_cpu = cpu;
	else // Default to Intel if an invalid CPU brand is provided
		m_cpu = "Intel";
}
string Computer::computerCpuBrand() {
	return m_cpu;
}

void Computer::computerRamSize(int ram) {
	if (ram == 8 || ram == 16 || ram == 32)
		m_ram = ram;
	else // Default to 32GB if an invalid RAM size is provided
		m_ram = 32;
}
int Computer::computerRamSize() {
	return m_ram;
}

void Computer::computerHardDriveType(string hardDrive) {
	if (hardDrive == "HD" || hardDrive == "SSD")
		m_hardDrive = hardDrive;
	else // Default to SSD if an invalid type is provided
		m_hardDrive = "SSD";
}
string Computer::computerHardDriveType() {
	return m_hardDrive;
}

void Computer::deviceType(string type) {
	if (type == "Laptop" || type == "Desktop" || type == "Tablet" || type == "Notebook") 
		m_deviceType = type;
	else // Default to Laptop if an invalid type is provided
		m_deviceType = "Laptop";
}
string Computer::deviceType() {
	return m_deviceType;
}

float Computer::computerPrice() {
	m_price = 0.0f; // Base price
	
	//Price adjustment for Makes
	if (m_make == "Lenovo") 
		m_price += 1200.00f; 
	else if (m_make == "HP")
		m_price += 1000.00f;
	else if (m_make == "Apple")
		m_price += 2000.00f;
	//Price adjustment for CPU Brand, Intel is more expensive than AMD
	if (m_cpu == "Intel")
		m_price += 200.00f;
	//Price adjustment for RAM Size, more RAM increases the price
	if(m_ram == 16)
		m_price += 300.00f;
	else if (m_ram == 32)
		m_price += 500.00f;
	//Price adjustment for Hard Drive Type, SSD is more expensive than HD
	if (m_hardDrive == "SSD")
		m_price += 500.00f; 
	//Price adjustment for Device Type, Laptops are more expensive while Tablets are cheaper
	if (m_deviceType == "Laptop")
		m_price += 300.00f;
	else if (m_deviceType == "Tablet") 
		m_price -= 200.00f; 


	return m_price;
}