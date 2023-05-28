/*
#include <iostream>;
#include <cstdlib>;
using namespace std;


int main() {

	srand(time(NULL));

	float myNumber[101];

	float min = 10;
	float max = 0;
	float sum = 0;

	for (int i = 0.; i <= 100; i++) {

		float num = ((float)rand() / RAND_MAX) * 10.0;
		myNumber[i] = num;

	}
	for (int i = 0.; i <= 100; i++) {

		if (myNumber[i] < min) {
			min = myNumber[i];
		}
		if (myNumber[i] > max) {
			max = myNumber[i];
		}
		sum += myNumber[i];
		

	}
	float medel = sum / 100;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Medel: " << medel << endl;
	return 0;
}
*/