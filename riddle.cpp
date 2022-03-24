#include <iostream>
#include <cmath>

using namespace std;

int main(){
	const int VARIABLE = 2;
	int number;
	cin >> number;
	if(number % 2 != 0 && number > 1){
		cout << int(pow(number, 2) - (number + number) + VARIABLE);
	} else {
		cout << "Wrong number";
	}
	return 0;
}