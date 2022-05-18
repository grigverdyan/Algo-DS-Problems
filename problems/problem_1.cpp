#include <iostream>
using namespace std;

bool isPrime(unsigned int number) {
	if (number < 2) {
		return false;
	}
	unsigned int i = 2;
	while (i * i <= number) {
		if (number % i == 0) {
			return false;
		}
		i++;
	}
	return true;
}

int main() {
	unsigned int number;
	cout << "\nInput number to check is it prime or not: ";
	cin >> number;
	if (isPrime(number))
		cout << "\nYour input is prime\n";
	else 
		cout << "\nYour input is NOT prime\n";
	return 0;
}
