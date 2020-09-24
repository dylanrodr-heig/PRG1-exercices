// Correct !
#include <iostream>
#include <limits>

using namespace std;

int main(){

	cout << "signed char (" << numeric_limits<signed char>::digits + 1 << " bits) : "
		  << (int)numeric_limits<signed char>::lowest() << " .. " << (int)numeric_limits<signed char>::max() << endl
		  << "short (" << numeric_limits<signed short>::digits + 1 << " bits) : "
		  << numeric_limits<signed short>::lowest() << " .. " << numeric_limits<signed short>::max() << endl
		  << "int (" << numeric_limits<signed int>::digits + 1 << " bits) : "
		  << numeric_limits<signed int>::lowest() << " .. " << numeric_limits<signed int>::max() << endl
		  << "long (" << numeric_limits<signed long>::digits + 1 << " bits) : "
		  << numeric_limits<signed long>::lowest() << " .. " << numeric_limits<signed long>::max() << endl
		  << "long long (" << numeric_limits<signed long long>::digits + 1 << " bits) : "
		  << numeric_limits<signed long long>::lowest() << " .. " << numeric_limits<signed long long>::max() << endl;

	return EXIT_SUCCESS;
}

