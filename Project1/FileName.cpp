#include <iostream>;
#include <string>;
using namespace std;
int main() {

	string z;
	cout << "Skriv ett heltal: ";
	cin >> z;
	int num = stoi(z);
	cout << "Dit heltal är: ";

	int x;
	cout << "skriv ett flyttal: ";
	cin >> x;
	float fl = x;
	cout << "Ditt flyttal är: ";

	float y;
	cout << "skriv en sträng: ";
	cin >> y;
	string str = to_string(y);
	cout << "Din sträng är: ";

	return 0;
}