#include <iostream>
using namespace std;

int main() {
	unsigned short int number, tempNumber, max, firstUnit = 0;
	tempNumber = number;
	max = number;
	cin >> number;
	
	while (tempNumber != 1) {
		tempNumber >>= 1;
		firstUnit++;
	}
	
	tempNumber = number;
	
	do {
		if (number % 2 == 0) {
			number >>= 1;
		}
		else {
			number = (1 << firstUnit) | (number >> 1);
		}
		if (max < number) {
			max = number;
		}
	}
	while (number != tempNumber);
	
	cout << max;
	return 0;
}
