#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
	const int N = 1000;
	double array[N], temp;
	int counter = 0;
	srand(time(NULL));
	cout.setf(ios::fixed);
	cout.precision(0);
	cout << "Source array:" << endl;
	
	for (int i = 0; i < N; i++) {
		temp = rand() % 20000000001 - 10000000000;
		for (int j = 0; j < i; j++) {
			if (array[j] == temp) {
				j = -1;
				temp = rand() % 20000000001 - 10000000000;
			}
		}
		array[i] = temp;
		cout << setw(13) << array[i];
	}
	
	for(int i = 0; i < N - 1; i ++){
		temp = 0;
		for(int j = 0; j < N - 1 - i; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				counter++;
			}
		}
		if(temp == 0){
			break;
		}
	}
	
	cout << "\n\nModified array: " << endl;
	
	for(int i = 0; i < N; i++){
		cout << setw(13) << array[i];
	}
	
	cout << "\n\nNumber of permutations => " << counter;
	
	return 0;
}