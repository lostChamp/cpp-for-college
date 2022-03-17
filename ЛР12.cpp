#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	const int N = 10;
	double arr[N], temp;
	int counter = 0, counter2 = 0;
	srand(time(NULL));
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Source array:" << endl;
	for(int i = 0; i < N; i++){
		arr[i] = (rand() % 261) / 10. - 13;
		cout << setw(7) << arr[i];
	}
	
	cout << "\nModified array: " << endl;
	
	for(int i = 0; i < N; i++){
		if(abs(int(arr[i])) <= 5){
			temp = arr[i];
			for(int j = i; j > counter; j--) {
				arr[j] = arr[j - 1];
			}
			arr[counter++] = temp;
		}
	}

	for(int i = 0; i < N; i++){
		cout << setw(7) << arr[i];
	}
	return 0;
}