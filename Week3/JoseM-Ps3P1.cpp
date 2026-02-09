#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//declaring the weight of exam 1 & 2
	float weightXm1 = 0.6;
	float weightXm2 = 0.4;

	//Accquiring the scores of exam & 2
	float scoreXm1;
	float scoreXm2;
	cout << "Please enter the score of exam 1, then the score of exam 2" << endl;
	cout << "Score of Exam 1: ";
	cin >> scoreXm1;
	cout << "Score of Exam 2: ";
	cin >> scoreXm2;

	//weighted scores calculation 
	float weightedscoreXm1 = scoreXm1 * weightXm1;
	float weightedscoreXm2 = scoreXm2 * weightXm2;
	float totWeightedscore = weightedscoreXm1 + weightedscoreXm2;

	//displaying the results
	cout << "The total score for both exams are " << totWeightedscore;
}