#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Entrez votre prenom :";
	string prenom;
	getline(cin, prenom);

	int age, ANNEE_ACTUELLE = 2020, annee_naissance;
	cout << "Entrez votre age :";
	cin >> age;

	// Calcul de l'âge
	annee_naissance = ANNEE_ACTUELLE - age;

	cout << endl << "Bonjour " << prenom << "," << endl;
	cout << "Vous avez " << age << " ans et vous etes ne(e) en " << annee_naissance << "." << endl;

	return 0;
}