#include <iostream>

using namespace std;

int main(){
	unsigned int number;
	int counter;
	cin >> number;
	
	while (number >= 1) {
		if (number & 1) {
			++counter;
		}
		number >>= 1;
	}
	
	cout << counter;
		
	return 0;
}