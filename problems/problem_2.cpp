#include <iostream>
using namespace std;

int gcd(int a, int b);
int max_min_gcd(int a, int b);

int main() {
	int a, b;
	cout << "\nInput a: ";
	cin >> a;
	cout << "\nInput b: ";
	cin >> b;

	cout << "The gcd of 'a' and 'b' is " << max_min_gcd(a, b) << endl;
}

int gcd(int a, int b) {
	// a >= b
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int max_min_gcd(int a, int b) {
	int GCD;
	if (a >= b) {
		GCD = gcd(a, b);
	}
	else {
		GCD = gcd(b, a);
	}
	return GCD;
}

