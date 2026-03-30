#include <iostream>
using namespace std;

float computeBattingAvg(int numofHits, int numofAtBats) {
	float battingAvg = (float)numofAtBats / numofHits;

	return battingAvg;
}

int main() {
	string playerLstName;
	int numofHits, numofAtBats;
	float battingAvg;
	int numofPlayers = 0;

	cout << "(CTRL+Z TO STOP)\n";
	cout << "Player's Last Name: ";
	cin >> playerLstName;
	cout << playerLstName << "'s # of hits: ";
	cin >> numofHits;
	cout << playerLstName << "'s # of At Bats: ";
	cin >> numofAtBats;

	while (!cin.eof()) 
	{
		battingAvg = computeBattingAvg(numofHits, numofAtBats);

		numofPlayers++;

		cout << "\n[Player]		" << playerLstName << "\n[Batting Average]	" << battingAvg << endl << endl;

		system("pause");

		cout << "\n(CTRL+Z TO STOP)\n";
		cout << "Player's Last Name: ";
		cin >> playerLstName;
		cout << playerLstName << "'s # of hits: ";
		cin >> numofHits;
		cout << playerLstName << "'s # of At Bats: ";
		cin >> numofAtBats;
	}

	cout << "\n\nNumber of Players: " << numofPlayers << endl;
	system("pause");

	return 0;
}