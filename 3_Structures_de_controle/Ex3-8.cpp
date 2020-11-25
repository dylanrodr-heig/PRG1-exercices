// CORRECT !
#include <iostream>

using namespace std;

int main(){
	enum month{JANUARY = 1, FEBRUARY, MARS, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
	int monthNb;
	string dayNbr;

	cout << "Entrez un no de mois (1-12) : ";
	cin >> monthNb;

	dayNbr = monthNb == 2 ? "28 ou 29" : monthNb < AUGUST
		? (monthNb % 2 == 1 ? "31": "30") : (monthNb % 2 != 1 ? "31": "30");

	cout << "Ce mois comporte " << dayNbr << " jours.";

	return EXIT_SUCCESS;
}
