#include <iostream>

using namespace std;

int main(){
	int m, n, k, coastOfLifting = 200, coastOfDescent = 100, totalPrice = 0;
	do{
		cin >> m >> n >> k;
	}while(2 > m || m > 100 || 2 > n || n > m || 2 > k || k > m - 1);
	
	int a = (n - 1) / k; 
	int level1 = a * k + 1, level2 = level1 + k;
	if (level2 - n < (n - level1) * 2 && level2 <= m){
		totalPrice = (level2 - n) * coastOfDescent;
	}else{
		totalPrice = (n - level1) * coastOfLifting;
	}
	cout << totalPrice;
	
	return 0;
}