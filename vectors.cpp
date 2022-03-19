#include <iostream>
using namespace std;

int main() {
	int vector[9];
	int* comp = vector;
	int* min = vector;
	int n  =  sizeof(vector)  /  sizeof(vector[0]);

	for(int i = 0; i < n; i ++){
		cin >> *(comp + i);
		if(*min > *(comp + i)){
			min = comp + i;
		}
	}
	
	cout << *min << endl;
	cout << min - comp;
	
	return 0;
}
