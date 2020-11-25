// Manque fixed et setprecision(1)
// Le prof n'a pas calculé au 10ème
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, d, moyenne;
	string appreciation;

	cout << "Entrez 4 notes : ";
	cin >> a >> b >> c >> d;

	moyenne = round(((a + b + c + d) / 4) * 10) / 10;

	if(moyenne < 4.0){
		appreciation = "Insuffisant";
	} else if(moyenne <= 4.5){
		appreciation = "Moyen";
	} else if(moyenne <= 5){
		appreciation = "Bien";
	} else if(moyenne <= 5.5){
		appreciation = "Tres bien";
	} else {
		appreciation = "Excellent";
	}

	cout << "Moyenne = " << moyenne << " - " << appreciation;
	return EXIT_SUCCESS;
}
