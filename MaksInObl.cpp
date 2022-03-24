#include <iostream>

using namespace std;

int main(){
	int number, max;
	cin >> number;
	const int SIZE = number;

	int **arr = new int *[SIZE];
	for(int i = 0; i < SIZE; i++){
		arr[i] = new int[SIZE];
	}
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			cin >> arr[i][j];
		}
	}
	max = arr[0][0];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (max < arr[i][j] && ((j >= i && j >= SIZE - i - 1) || (j <= i && j <= SIZE - i - 1))){
				max = arr[i][j];
			}
		}
	} 
	cout << max;
	for(int i = 0; i < SIZE; i++){
		delete[] arr[i];
	}
	delete[] arr;
	
	return 0;
}