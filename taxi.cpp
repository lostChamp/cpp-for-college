#include <iostream>

using namespace std;

int main(){
	int firstTaxi, secondTaxi, thirdTaxi, numbersOfTransfers = 0, allPassengers, averageOfPassengers;
	cin >> firstTaxi >> secondTaxi >> thirdTaxi;
	allPassengers = firstTaxi + secondTaxi + thirdTaxi;
	if(allPassengers % 3 != 0){
		cout << "IMPOSSIBLE";
	} else {
		averageOfPassengers = allPassengers / 3;
		if(firstTaxi > averageOfPassengers){
			numbersOfTransfers += firstTaxi - averageOfPassengers;
		}
		if(secondTaxi > averageOfPassengers){
			numbersOfTransfers += secondTaxi - averageOfPassengers;
		}
		if(thirdTaxi > averageOfPassengers){
			numbersOfTransfers += thirdTaxi - averageOfPassengers;
		}
		cout << numbersOfTransfers;
	}

	return 0;
}