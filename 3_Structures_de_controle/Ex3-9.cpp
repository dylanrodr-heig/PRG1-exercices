// Trop long, pas trop lisible, du coup variente 2 mieux (Voir corr prof)
#include <iostream>

using namespace std;

int main(){
	int a, b, c, val;

	cout << "Entrez 3 entiers : ";
	cin >> a >> b >> c;

	val = a <= b ? a <= c ? a : c : b <= c ? b : c;

	cout << "La plus petite valeur est " << val;
	return EXIT_SUCCESS;
}
