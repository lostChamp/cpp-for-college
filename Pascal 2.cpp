#include <iostream>

using namespace std;

long factorial(int number){
	if (number == 0){
		return 1;
	}else if (number == 1){
		return 1;	
	} else {
		int res = number * factorial (number - 1);
		return res;
	}
}

int* pascal(int row){
	int* array =  new int[row + 1];
	for(int i = 0; i < row + 1; i++){
		array[i] = int(factorial(row) / (factorial(i) * factorial(row - i)));
	}
	return array;
}

int main(){
	int row, n = 0;
	cin >> row;
	int *res = pascal(row);
	for(int i = 0; i < row + 1; i++){
		cout << res[(row + 1) - row--];
		cout << endl;
		cout << res[i];
		if(i != row){
			cout << ", ";
		}
	}
	delete[] res;
	return 0;
}