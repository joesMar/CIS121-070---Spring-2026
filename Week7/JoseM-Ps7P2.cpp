#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string playrLstname;
	int hits, atBats;
	float battingAvg;
	int playercount = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Player's Last Name: ";
	cin >> playrLstname;
	cout << playrLstname << "'s number of Hits. \n# of Hits: ";
	cin >> hits;
	cout << playrLstname << "'s number of At Bats. \n# of At Bats: ";
	cin >> atBats;

	while (!cin.eof())
	{
		battingAvg = (float)hits / atBats;
		playercount++;

		cout << fixed << setprecision(3);
		cout << playrLstname << " has an battering average of " << battingAvg << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Next Player's Last Name: ";
		cin >> playrLstname;
		cout << playrLstname << "'s number of Hits. \n# of Hits: ";
		cin >> hits;
		cout << playrLstname << "'s number of At Bats. \n# of At Bats: ";
		cin >> atBats;
	}

	cout << "\n\nPlayer Count: " << playercount << endl;
	system("pause");
}