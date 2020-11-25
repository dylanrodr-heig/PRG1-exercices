// Correct, comme correction sauf que dans un ordre différent !
// Par contre... Clément à fait mieux !!! :D
#include <iostream>

using namespace std;

int main(){
	int nb;

	cout << "Entrez un entier >= 0 : ";
	cin >> nb;

	if(!(nb % 3 == 0 || nb % 5 == 0)){
		cout << nb << " n'est ni un multiple de 3 ni un multiple de 5";
	} else if (nb % 3 == 0 && nb % 5 == 0){
		cout << nb << " est un multiple de 3 et de 5";
	} else if (nb % 3 == 0){
		cout << nb << " est un multiple de 3";
	} else {
		cout << nb << " est un multiple de 5";
	}
/*
	if(nb % 3 && nb % 5){
		cout << nb << " n'est ni un multiple de 3 ni un multiple de 5";
	} else if (!(nb % 3 || nb % 5)){
		cout << nb << " est un multiple de 3 et de 5";
	} else if (!(nb % 3)){
		cout << nb << " est un multiple de 3";
	} else {
		cout << nb << " est un multiple de 5";
	}
 */

	return EXIT_SUCCESS;
}
