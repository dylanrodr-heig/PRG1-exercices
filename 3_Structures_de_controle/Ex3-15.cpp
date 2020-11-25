// CORRECT !
#include <iostream>

using namespace std;

int main(){
	enum month{JANUARY = 1, FEBRUARY, MARS, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
	int monthNb;
	string dayNbr;

	cout << "Entrez un no de mois (1-12) : ";
	cin >> monthNb;

	switch (monthNb) {
		case FEBRUARY:
			dayNbr = "28 ou 29";
			break;
		case APRIL:
		case JUNE:
		case SEPTEMBER:
		case NOVEMBER:
			dayNbr = "30";
			break;
		default:
			dayNbr = "31";
			break;
	}

	cout << "Ce mois comporte " << dayNbr << " jours.";

	return EXIT_SUCCESS;
}
