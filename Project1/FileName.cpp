#include <iostream>;
#include <string>;
using namespace std;
int main() {

	string z;
	cout << "Skriv ett heltal: ";
	cin >> z;
	int num = stoi(z);
	cout << "Dit heltal �r: ";

	int x;
	cout << "skriv ett flyttal: ";
	cin >> x;
	float fl = x;
	cout << "Ditt flyttal �r: ";

	float y;
	cout << "skriv en str�ng: ";
	cin >> y;
	string str = to_string(y);
	cout << "Din str�ng �r: ";

	return 0;
}