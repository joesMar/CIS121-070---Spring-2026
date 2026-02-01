#include <iostream>
using namespace std;

int main() {
	float length, width, area, circumference;
	cout << "Enter the length and width of the rectangle" << endl << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	area = length * width;
	circumference = 2 * length + 2 * width;
	cout << "The triangle has an area " << area << " and a circumference " << circumference << ".";
}
