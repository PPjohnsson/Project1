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

// Anropa denna funktion för att enkelt kunna få åäö rätt utskriva:
void setWesternEuropeanCodePage() {
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
}

// Ändra färg i konsollen, exempel på färger, fler finns:
void setColorBlue() {
	const int blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, blue); // Ändra till blå, ljus färg
}
void setColorCyan() {
	const int cyan = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, cyan); // Ändra till blå, ljus färg

}
void setColorGreen() {
	const int green = FOREGROUND_GREEN;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, green); // Ändra till blå, ljus färg
}
void setColorWhite() {
	const int white = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, white); // Ändra till blå, ljus färg
}
void setColor() {
	const int blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
	const int cyan = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	const int green = FOREGROUND_GREEN;
	const int white = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, blue); // Ändra till blå, ljus färg
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
	cout << "    3. Kolla skottår                           ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    4. Räkna funktion y = f(x)                 ";
	setColorCyan();
	cout << "**\n";
	cout << "**";
	setColorWhite();
	cout << "    5. Inställningar                           ";
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
	cout << "Välj alternativ: ";
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

	string vadSkaGöras;
	string fortsätta;
	int tal;
	int räknare = 1;
	int räknaNej = 0;
	int num = rand();
	cout << num;
	

	do {
		cout << " Skriv ett tal: ";
		cin >> tal;

		if (tal < num) {
			cout << "För lågt\n";
			räknare++;
			
		}
		if (tal > num) {
			cout << "För högt\n";
			räknare++;
		}
		if(tal == num) {
			break;
		}
	} while (true);
		cout << "Du gissade rätt!\nDu hade " << räknare << " gissningar.\n\n";

		
		
		do {
			if (räknaNej < 1) {
				cout << "Vill du fortsätta spela (ja/nej)? ";
				cin >> fortsätta;
				if (fortsätta == "ja") {
					valEtt();
					räknaNej++;
				}
				else if (fortsätta == "nej") {
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
		if (räknaNej < 1) {
			cout << "Vill du gå tillbaka till huvudmenyn (ja/nej)? ";
			cin >> vadSkaGöras;
			if (vadSkaGöras == "ja") {

				displayOptionsMeny();
			}
			else {
				do {

					if (vadSkaGöras == "nej") {

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

	string värde[] = {"Äss", "två", "tre", "fyra", "fem", "sex", "sju", "åtta", "nio", "tio", "knekt", "dam", "kung" };
	string färger[] = { "RUTER", "SPADER", "KLÖVER", "HJÄRTER" };

	cout << "                                                     " << "Korlek\n";
	cout <<"     " <<"--------------------------------------------------------------------------------------------------------------\n";

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(5) << " | " << färger[j] << std::setw(7) << värde[i] << " | ";
		}
		cout << "\n";
	}
	
	string tillbaka;
	cout << "Vill du gå tillbaka till huvudmenyn? :";
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
	
	int år;

	cout << "Skriv ett år: ";
	cin >> år;

	if (år % 4 == 0) {

		cout << år << " är ett skott år";
		Sleep(5000);

	}
	else {

		cout << år << " är inte ett skott år";
		Sleep(5000);

	}
	system("cls");
	displayOptionsMeny();


}
void valFyra() {
	system("cls");
	float x;
	cout << "Skriv ditt x värde (x^2): ";
	cin >> x;

	float y = x * x;

	cout << "y = " << y;
	Sleep(5000);
	system("cls");
	displayOptionsMeny();

}
	
bool olika_val() {

	bool färger = false;
	valFem();
		return 0;
}

string valFem() {
	

	string f_val;
	cout << "Vilken färg ska menyn få?\n\n";

	cout << "1: Blå\n2: Grön\n3: Vit\n4. Cyan \n: ";
	cin >> f_val;


	if (f_val == "Blå") {
		setColorBlue();
		olika_val() == true;
		
	}
	if (f_val == "Grön") {
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
