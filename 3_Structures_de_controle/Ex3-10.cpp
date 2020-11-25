// Pas besoin de boucle !!!
#include <iostream>
using namespace std;

int main(){
	int a, b, c, temp;

	cout << "Entrez 3 entiers : ";
	cin >> a >> b >> c;

	while(a > b || b > c) {
		if(a > b){
			temp = a;
			a = b;
			b = temp;
		}
		if(b > c){
			temp = b;
			b = c;
			c = temp;
		}
		if(a > c){
			temp = a;
			a = c;
			c = temp;
		}
	}

	cout << "Les 3 entiers tries par ordre croissant : " << a << " " << b << " " << c;
	return EXIT_SUCCESS;
}
