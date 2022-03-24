#include <iostream>

using namespace std;

int main(){
	int number;
	bool flag = 0, temp = 0;
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
	
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			cout.width(5);
			cout << arr[i][j];
		}
		cout << endl;
	}
	
    for (int k = 0; k < SIZE; k++){
		flag = 1;
        for (int j = 0; j < SIZE; j++){
            if (arr[k][j] != arr[j][k]){
                flag = 0;
                break;
            }
        }
        if(flag){
        	temp = 1;
            cout << "Row " << k << " mathing with column " << k << endl;
        }
    }
    if(!temp){
        cout << "There are no rows matching the columns" << endl;
	}
    
	for(int i = 0; i < SIZE; i++){
		delete[] arr[i];
	}
	delete[] arr;
	
	return 0;
}