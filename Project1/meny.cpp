#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <ctime>
#include < iomanip >
using namespace std;


void displayOptionsMeny();
void valEtt();
void valTva();
void valTre();
void valFyra();
bool olika_val();
string valFem();

// Anropa denna funktion f�r att enkelt kunna f� ��� r�tt utskriva:
void setWesternEuropeanCodePage() {
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
}

// �ndra f�rg i konsollen, exempel p� f�rger, fler finns:
void setColorBlue() {
	const int blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, blue); // �ndra till bl�, ljus f�rg
}
void setColorCyan() {
	const int cyan = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, cyan); // �ndra till bl�, ljus f�rg

}
void setColorGreen() {
	const int green = FOREGROUND_GREEN;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, green); // �ndra till bl�, ljus f�rg
}
void setColorWhite() {
	const int white = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, white); // �ndra till bl�, ljus f�rg
}
void setColor() {
	const int blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
	const int cyan = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	const int green = FOREGROUND_GREEN;
	const int white = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, blue); // �ndra till bl�, ljus f�rg
}
int GetInput()
{
	int choice;
	cin >> choice;
	return choice;
}
void displayOptionsMeny() {
	setWesternEuropeanCodePage();
	int choice = 0;
	bool conditionMet = true;
		bool val = olika_val();
		
		if (conditionMet) {
			
			
			
		}
		else {
			setColorCyan();
		}
	cout << "***************************************************\n";
	cout << "************  Uppgift 1  **************************\n";
	cout << "***************************************************\n";
	cout << "**";
	setColorWhite();
	cout << "    1. Gissa ett tal                           ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    2. Skriv ut alla kort i en kortlek         ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    3. Kolla skott�r                           ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    4. R�kna funktion y = f(x)                 ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    5. Inst�llningar                           ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    6. Avsluta                                 ";
	setColorCyan();
	cout << "**\n";
	cout << "**                                               **\n";
	cout << "***************************************************\n";
	cout << "***************************************************\n";
	cout << "V�lj alternativ: ";
	setColorWhite();


	choice = GetInput();


	switch (choice) {

	case 1: {
		valEtt();
	}
	case 2: {

		valTva();

	}
	case 3: {

		valTre();

	}
	case 4: {

		valFyra();

	}
	case 5: {


		olika_val();

	}
	case 6: {

		exit(1);

	}
	}
}

void valEtt() {

	system("cls");

	srand(time(NULL));

	string vadSkaG�ras;
	string forts�tta;
	int tal;
	int r�knare = 1;
	int r�knaNej = 0;
	int num = rand();
	cout << num;
	

	do {
		cout << " Skriv ett tal: ";
		cin >> tal;

		if (tal < num) {
			cout << "F�r l�gt\n";
			r�knare++;
			
		}
		if (tal > num) {
			cout << "F�r h�gt\n";
			r�knare++;
		}
		if(tal == num) {
			break;
		}
	} while (true);
		cout << "Du gissade r�tt!\nDu hade " << r�knare << " gissningar.\n\n";

		
		
		do {
			if (r�knaNej < 1) {
				cout << "Vill du forts�tta spela (ja/nej)? ";
				cin >> forts�tta;
				if (forts�tta == "ja") {
					valEtt();
					r�knaNej++;
				}
				else if (forts�tta == "nej") {
					system("cls");
					break;
				}
				else {
					continue;
				}

			}
			else;
			break;
		} while (true);
		if (r�knaNej < 1) {
			cout << "Vill du g� tillbaka till huvudmenyn (ja/nej)? ";
			cin >> vadSkaG�ras;
			if (vadSkaG�ras == "ja") {

				displayOptionsMeny();
			}
			else {
				do {

					if (vadSkaG�ras == "nej") {

						break;

					}
					else {
						continue;
					}

				} while (true);
			}
		}
}

void valTva() {
	system("cls");

	string v�rde[] = {"�ss", "tv�", "tre", "fyra", "fem", "sex", "sju", "�tta", "nio", "tio", "knekt", "dam", "kung" };
	string f�rger[] = { "RUTER", "SPADER", "KL�VER", "HJ�RTER" };

	cout << "                                                     " << "Korlek\n";
	cout <<"     " <<"--------------------------------------------------------------------------------------------------------------\n";

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(5) << " | " << f�rger[j] << std::setw(7) << v�rde[i] << " | ";
		}
		cout << "\n";
	}
	
	string tillbaka;
	cout << "Vill du g� tillbaka till huvudmenyn? :";
	cin >> tillbaka;

	if (tillbaka == "ja") {
		system("cls");
		displayOptionsMeny();
		
	}
	else {
		valTva();
	}
	
	
	
	

}

void valTre() {

	system("cls");
	
	int �r;

	cout << "Skriv ett �r: ";
	cin >> �r;

	if (�r % 4 == 0) {

		cout << �r << " �r ett skott �r";
		Sleep(5000);

	}
	else {

		cout << �r << " �r inte ett skott �r";
		Sleep(5000);

	}
	system("cls");
	displayOptionsMeny();


}
void valFyra() {
	system("cls");
	float x;
	cout << "Skriv ditt x v�rde (x^2): ";
	cin >> x;

	float y = x * x;

	cout << "y = " << y;
	Sleep(5000);
	system("cls");
	displayOptionsMeny();

}
	
bool olika_val() {

	bool f�rger = false;
	valFem();
		return 0;
}

string valFem() {
	

	string f_val;
	cout << "Vilken f�rg ska menyn f�?\n\n";

	cout << "1: Bl�\n2: Gr�n\n3: Vit\n4. Cyan \n: ";
	cin >> f_val;


	if (f_val == "Bl�") {
		setColorBlue();
		olika_val() == true;
		
	}
	if (f_val == "Gr�n") {
		setColorGreen();
		olika_val() == true;
	}
	if (f_val == "Vit") {
		setColorWhite();
		olika_val() == true;
	}
	if (f_val == "Cyan") {
		setColorCyan();
		olika_val() == true;
	}
	else {
		setColorCyan();
		olika_val() == true;
	}

	displayOptionsMeny();

	return f_val;

}

int main() {
	
	displayOptionsMeny();
	return 0;

}
