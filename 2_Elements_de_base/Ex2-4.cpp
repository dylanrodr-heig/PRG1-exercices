// Correct !
#include <iostream>
#include <limits>

using namespace std;

int main(){

	unsigned long long binary = 1010101;
	const unsigned BASE = 2;
	long double decimalNumber = 0;
	while (binary) {
		int lastDigit = binary % 10;
		binary = binary/10;
		decimalNumber += lastDigit*BASE;
		BASE = BASE*2;
	}
	return EXIT_SUCCESS;
}

