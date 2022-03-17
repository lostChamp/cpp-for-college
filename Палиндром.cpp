#include <iostream>

using namespace std;

int main() {
	const int SIZE = 16;
	unsigned short int number, tempNumber, revNumber;
	cin >> number;
	tempNumber = number;
	for (int i = SIZE; i > 0; --i) {
		revNumber = (tempNumber & 1) | (revNumber << 1);
		tempNumber >>= 1;
	}
	
	if (number == revNumber) {
		cout << number << " is a bitwise palindrome";
	}
	else {
		cout << number << " is not a bitwise palindrome";
	}

	return 0;
}