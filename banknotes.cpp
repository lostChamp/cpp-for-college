#include <iostream>

using namespace std;

int main(){
	const int BANKNOTES[] = {50, 20, 10, 5, 1};
	const int SIZE_OF_ARRAY = 5;
	int amountOfMoney, temp;
	cin >> amountOfMoney;
	if(amountOfMoney <= 0){
		cout << "Wrong number";
	}else{
		for(int i = 0; i < SIZE_OF_ARRAY; i++){
			if(amountOfMoney == 0){
				break;
			}
			temp = amountOfMoney / BANKNOTES[i];
			amountOfMoney -= BANKNOTES[i] * temp;
			for(int k = 0; k < temp; k++){
				cout << BANKNOTES[i] << " ";
			}
		}
	}
	
	return 0;
}