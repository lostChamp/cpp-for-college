#include <iostream>

using namespace std;

int main(){
	int a, b, c, d, k;
	cin >> a >> b >> c >> d >> k;
	for(int i = 0; i < k; i++){
		a *= b;
		if(a < c){
			a = 0;
			break;
		}else{
			a -= c;
		}
		if(d <= a){
			a = d;
		}
	}
	cout << a;
	return 0;
}